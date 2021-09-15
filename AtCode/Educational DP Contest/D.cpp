//Arissa Yoshida
//D	Knapsack 1 - https://atcoder.jp/contests/dp/tasks/dp_d
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXN 100005


int main() {
  int n,w;
  cin >> n >> w;
  vector<pair<ll, ll>>v;
  ll dp[n+1][w+1];
  memset(dp,0, sizeof(ll)*(n+1)*(w+1));
  for(int i=0;i<n;i++){
    ll a,b;
    cin >> a >> b;
    v.push_back(make_pair(a,b)); 
  }
  for(int i=1;i<=n;i++){
    ll maior =0;
    for(int j=1;j<=w;j++){
      maior = max(dp[i-1][j],dp[i][j-1]);
      if(j>=v[i-1].first){
        maior = max(maior,dp[i-1][j-v[i-1].first]+v[i-1].second);
      }
        dp[i][j] = maior;
    
    }
  }
  cout << dp[n][w] << endl;
  return 0;
}
