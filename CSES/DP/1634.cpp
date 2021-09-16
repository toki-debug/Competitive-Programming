//Arissa Yoshida
//Minimizing Coins - https://cses.fi/problemset/task/1634

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
    vector<ll>dp(x+1,MAXN);
    dp[0]=0;
    for(int i=0;i<n;i++){
      for(ll j=v[i];j<=x;j++){
        dp[j] = min(dp[j],dp[j-v[i]]+1);
      }
    }
  

    if(dp[x]==MAXN){
      cout << -1 << endl;
    }else{
      cout << dp[x] << endl;
    }

        


  return 0;
}
