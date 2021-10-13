//Arissa Yoshida
//Subarray Sums I - https://cses.fi/problemset/submit/1660/

#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;

#define MAXN 101

void setIO(string s) {
  if (s.empty()) {
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
  } else {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

int main() {
  no_tle_pls
      // setIO("");
      ll n;
  ll x;
  cin >> n >> x;
  vector<ll> v(n + 1, 0);
  map<ll, vector<ll>> mp;
  mp[0].push_back(0);
  for (ll i = 1; i <= n; i++) {
    cin >> v[i];
    v[i] += v[i - 1];
    mp[v[i]].push_back(i);
  }
  ll val = 0;
  ll pos = 0;
  ll sum = 0;
  for (ll i = n; i >= 1; --i) {
    val = v[i] - x;
    pos = 0;
    if (mp[val].size() != 0) {
      pos =
          upper_bound(mp[val].begin(), mp[val].end(), i - 1) - mp[val].begin();
      pos--;
      if (pos < 0) {
        pos = 0;
      } else {
        pos += 1;
      }
    }
    sum += pos;
  }
  cout << sum << endl;

  return 0;
}
