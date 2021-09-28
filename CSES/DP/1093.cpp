//Arissa Yoshida
//Two Sets II - https://cses.fi/problemset/task/1093

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define fast_io                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;
 
ll pot (ll a, ll b){
    ll res = 1;
    while(b){
        if(b&1) res = (res*a)%MOD;
        a = (a*a)%MOD;
        b >>= 1;
    }
    return res;
}
 
 
int main() {
  fast_io 
  ll n;
  cin >> n;
 
  ll t = (n * (n + 1)) / 2;
  if(t%2){
    cout << 0 << endl;
    return 0;
  }
  t /= 2;
  vector<vector<ll>> dp(n+1, vector<ll>(t+1, 0));
  dp[0][0] = 1;
  for (ll i = 1; i <= n; i++) {
    for (ll j = 0; j <= t; j++) {
      if (j == 0) {
        dp[i][j] = 1;
      } else if (j - i < 0) {
        dp[i][j] = dp[i - 1][j];
      } else {
        dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - i])%MOD;
      }
    }
  }
  ll x = pot(2,MOD-2);
  cout << ((dp[n][t]%MOD)*x%MOD)%MOD << endl;
}
