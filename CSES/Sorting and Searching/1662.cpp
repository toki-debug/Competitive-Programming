//Arissa Yoshida
//Subarray Divisibility - https://cses.fi/problemset/task/1662

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
  cin >> n;
  map<ll, ll> mp;
  ll a;
  ll sum = 0;
  ll r = 0;
  mp[0] = 1;
  for (int i = 0; i < n; i++) {
    cin >> a;
    sum += a;
    mp[(sum % n + n) % n]++;
  }

  // r = mp[0];
  for (ll i = 0; i < n; i++) {
    if (mp[i]) {
      r += (mp[i] * (mp[i] - 1)) / 2;
    }
  }

  cout << r << endl;

  return 0;
}
