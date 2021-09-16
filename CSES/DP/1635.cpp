//Arissa Yoshida
//Coin Combinations I - https://cses.fi/problemset/task/1635

#include <bits/stdc++.h>
#define MAXN 10000000
#define MAX 4001
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    const ll MOD = 1e9 +7;
    ll n,x;
    cin >> n >> x;
    vector<ll>v;
    for(int i=0;i<n;i++){
      ll a;
      cin >> a;
      v.push_back(a);
    }
    vector<ll>dp(x+1,0);
    dp[0]=1;
    for(int i=1;i<=x;i++){
      for(ll j=0;j<n;j++){
        if(v[j]<=i){
          dp[i]+= dp[i-v[j]];
          dp[i]%=MOD;
        }
        
      }
    }
  
      cout << dp[x] << endl;
    
 
        
 
 
  return 0;
}
