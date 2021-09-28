//Arissa Yoshida
//Rectangle Cutting - https://cses.fi/problemset/task/1744

#include <bits/stdc++.h>
#define MAXN 1000002
#define MAX 4001
using namespace std;
typedef long long ll;
ll MOD = 1000000007;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a,b;
  cin >> a >> b;
  int minimo = min(a,b);
  int count=0;
  int dp[a+2][b+2];
  for(int i=0;i<=a;i++){
    for(int j=0;j<=b;j++){
      if(i==j){
        //Já é um quadrado
        dp[i][j] = 0;
      }else{
        dp[i][j] = INT_MAX;
        for(int k=1;k<=i/2;k++){
          dp[i][j] = min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
        }
        for(int k=1;k<=j/2;k++){
          dp[i][j] = min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
        }
      }
    }
  }
  
  cout << dp[a][b] << endl;
 
  return 0;
}
