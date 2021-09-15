//Arissa Yoshida
//C	Vacation - https://atcoder.jp/contests/dp/tasks/dp_c

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXN 100005


int main() {
  int n;
  cin >> n;
  int a,b,c;
  int mat[n][3];
  int dp[n][3];
  int r =0;
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin >> mat[i][j];
      if(i==0){
      dp[i][j] = mat[i][j];
      }else{
        if(j==0){
          dp[i][j] = max(dp[i-1][1]+mat[i][j],dp[i-1][2]+mat[i][j]);
        }else if(j==1){
          dp[i][j] = max(dp[i-1][0]+mat[i][j],dp[i-1][2]+mat[i][j]);
        }else{
          dp[i][j] = max(dp[i-1][0]+mat[i][j],dp[i-1][1]+mat[i][j]);
        }
      }
      if(i==n-1){
        r = max(r,dp[i][j]);
      }
    }
    
  }
  
  cout << r << endl;
  return 0;
}
