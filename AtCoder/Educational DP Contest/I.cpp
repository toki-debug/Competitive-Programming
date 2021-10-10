//Arissa Yoshida
//I - Coins - https://atcoder.jp/contests/dp/tasks/dp_i
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast_io                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define mod 1000000007
#define MAX 100005

void setIO(string s) {
  if (s.empty()) {
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
  } else {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

int main() {
  // setIO("");
  //fast_io 
  int n;
  cin >> n;
  vector<double>p(n+1,0);
  vector<vector<double>> dp(n + 1, vector<double>(n + 1));
  dp[0][0]=1;

  for(int i=1;i<=n;i++){
    scanf("%lf",&p[i]);
  }
  //Calcula todas as possibilidades
  for(int i=1;i<=n;i++){
    for(int j=0;j<=i;j++){
      if(j==0){
        dp[i][j] = dp[i-1][j] * (1.0-p[i]); //Situação em que é apenas tail
      }else{
        dp[i][j] = dp[i-1][j] *(1.0-p[i]) //Situação de cima em que já sao i heads + 1 tail
         +  dp[i-1][j-1] *p[i] ; // Situação anterior na diagonal em que tem i-1 heads e se adiciona +1 head
      }
    }
  }
  double sum=0;
  for(int j=(n+1)/2;j<=n;j++){ //Soma apenas quando tem numero de heads > tail
    sum+=dp[n][j];
  }
  printf("%.10lf\n",sum);
  return 0;
}
