//Arissa Yoshida
//E Knapsack 2 - https://atcoder.jp/contests/dp/tasks/dp_e

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 1e18L +5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,w;
    cin >> n >> w;
    vector<ll>weight,value;
    
    ll sum=0;
    for(ll i=0;i<n;i++){
      ll a,b;
      cin >> a >> b;
      weight.push_back(a);
      value.push_back(b);
      sum+=b;
    }
    vector<ll>dp(sum+1,INF);
    dp[0] = 0;
    for(ll i=0;i<n;i++){
      for(ll j=sum - value[i];j>=0;--j){
        dp[j+value[i]] = min(dp[j+value[i]],dp[j]+weight[i]);
        
      }
    }
    ll res = 0;
    for(ll i=0;i<=sum;i++){
      if(dp[i]<=w){
        res = max(res,i);
      }
    }
    

    cout << res << "\n";
}
