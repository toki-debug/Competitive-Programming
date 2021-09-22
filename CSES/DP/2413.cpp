//Arissa Yoshida
//Counting Towers - https://cses.fi/problemset/task/2413/

#include <bits/stdc++.h>
#define MAXN 1000002
#define MAX 4001
using namespace std;
typedef long long ll;
ll MOD = 1000000007;
 
ll dp[MAXN][2];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  
  dp[0][0] = dp[0][1] = 1;
  for (ll i = 1; i < MAXN; i++) {
    ll op1 = (dp[i - 1][0] + dp[i - 1][1]) % MOD; // Dont Extend any tile
    ll op2 = dp[i - 1][0] % MOD;                  // Extend both for |_|_|
    ll op3 = (2 * dp[i - 1][0]) % MOD;            // Extend one (mirror)
    ll op4 = dp[i - 1][1];                        // Extend both for |_ _|
 
    dp[i][0] = (op1 + op2 + op3) % MOD; // |_|_|
    dp[i][1] = (op1 + op4) % MOD;       //|_ _|
  }
  while (t--) {
    ll n;
    cin >> n;
    cout << (dp[n - 1][0] + dp[n - 1][1]) % MOD << endl;
  }
  return 0;
}
