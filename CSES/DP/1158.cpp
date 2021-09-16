//Arissa Yoshida
//Book Shop - https://cses.fi/problemset/task/1158/

#include <bits/stdc++.h>
#define MAXN 10000000
#define MAX 4001
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n,x;
  cin >> n >> x;
  vector<int>pages;
  vector<int>price;
  vector<vector<int>> dp(n+1, vector<int>(x+1,0));
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    price.push_back(a);
  }
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    pages.push_back(a);
  }

for(int i=1;i<=n;i++){
    for(int j=1;j<=x;j++){
      if(j>=price[i-1]){
        dp[i][j] = max(dp[i-1][j],dp[i][j-1]); 
        dp[i][j] = max(dp[i][j],dp[i-1][j-price[i-1]]+pages[i-1]);
      }else{
        dp[i][j]=dp[i-1][j];
      }
      
    }
  }
  cout << dp[n][x] << endl;
  return 0;
}
