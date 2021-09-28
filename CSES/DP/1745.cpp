//Arissa Yoshida
//Money Sums - https://cses.fi/problemset/task/1745

#include <bits/stdc++.h>
#define MAXN 102
#define MAX 100002
using namespace std;
typedef long long ll;
ll MOD = 1000000007;
vector<ll> p(MAXN, 0);
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n;
  cin >> n;
 
  map<ll, ll> mp;
  map<ll, ll>::iterator itr;
 
  ll tam = 0;
 
  for (ll i = 1; i <= n; i++) {
    cin >> p[i];
    tam += p[i];
  }
  vector<vector<ll>> dp(n + 1, vector<ll>(tam + 1));
  for (ll i = 0; i < n; i++) {
    dp[i][0] = 1;
  }
 
  for (ll i = 1; i <= n; i++) {
    for (ll j = 1; j <= tam; j++) {
      if (dp[i-1][j]==1 || (j - p[i]) >= 0 && dp[i - 1][j - p[i]]) {
        dp[i][j] = 1;
      }
      if (dp[i][j]) {
        mp[j]++;
      }
    }
  }
 
  cout << mp.size() << endl;
  for (itr = mp.begin(); itr != mp.end(); ++itr) {
    cout << itr->first << " ";
  }
  cout << endl;
 
  return 0;
}
