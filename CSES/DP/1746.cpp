//Arissa Yoshida
//Array Description - https://cses.fi/problemset/task/1746

#include <bits/stdc++.h>
#define MAXN 10000000
#define MAX 4001
using namespace std;
typedef long long ll;
ll MOD = 1000000007;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, m;
  
  cin >> n >> m;
  vector<ll> v(n+1, 0);
  vector<vector<ll>> dp(n+1, vector<ll>(m+2,0));
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }
 
  for (ll i = 1; i <= n; i++) {
    for(ll j=1;j<=m;j++){
      if(i==1 && (v[i-1] ==0 || v[i-1]==j)){
        dp[i][j] = 1;
      }else{
        if(v[i-1]==0 || v[i-1]==j){
          dp[i][j] = ((dp[i-1][j+1] + dp[i-1][j-1])%MOD +  dp[i-1][j])%MOD; 
        }
      }
    }
  }
 
  ll sum =0;
  for(int i=1;i<=m;i++){
    sum+=dp[n][i];
    sum%=MOD;
  }
 
cout << sum << endl;
 
return 0;
}
