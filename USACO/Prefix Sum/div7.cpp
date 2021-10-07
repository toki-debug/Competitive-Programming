//Arissa Yoshida
//Problem 2. Subsequences Summing to Sevens - http://www.usaco.org/index.php?page=viewproblem2&cpid=595

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
  no_tle_pls setIO("div7");
  int n;
  cin >> n;
  vector<ll> a(7, -1);
  ll sum = 0, ans = 0;
  a[0] =0;
  for (ll i = 1; i <= n; i++) {
    ll b;
    cin >> b;
    sum += b;

    ll r = sum % 7;
    if (a[r] == -1) {
      a[r] = i;
    }
    ans = max(i - a[r], ans);
  }
  cout << ans << endl;
  return 0;
}
