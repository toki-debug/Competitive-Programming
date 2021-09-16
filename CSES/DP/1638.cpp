//Arissa Yoshida
//Grid Paths - https://cses.fi/problemset/task/1638/
#include <bits/stdc++.h>
#define MAXN 10000000
#define MAX 4001
using namespace std;
typedef long long ll;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  int dp[n + 1][n + 1];
  const ll MOD = 1e9 +7;
  char c;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      dp[i][j]=0;
    }
  }
  
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> c;
      if (c == '*') {
        dp[i][j] = 0;
      } else {
        dp[i][j] = -1;
      }
    }
  }
  if(dp[1][1]==0){
    cout << 0 << endl;
    return 0;
  }
  dp[1][1]=1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (dp[i][j] == -1) {
        dp[i][j] = dp[i-1][j] + dp[i][j-1];
        dp[i][j]%=MOD;
      }else if(!(i==1 && j==1)){
        dp[i][j] =0;
      }
      
    }
    
  }
  
  
  cout << dp[n][n];
 
  return 0;
}
