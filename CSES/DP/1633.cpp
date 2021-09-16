//Arissa Yoshida
//Dice Combination - https://cses.fi/problemset/task/1633/
#include <bits/stdc++.h>
#define MAXN 100001
#define MAX 4001
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    const ll MOD = 1e9 +7;
    ll n;
    cin >> n;
    vector<ll>dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=6;j++){
        if(i-j>=0){
          dp[i] = (dp[i]+dp[i-j])%MOD;
        }else{
          break;
        }
        
      }
    }

    cout << dp[n] << endl;


  return 0;
}
