//Arissa Yoshida
//Edit Distance - https://cses.fi/problemset/task/1744

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
  string a, b;
  cin >> a >> b;
  int dp[a.size() + 1][b.size() + 1];
  for (int i = 0; i <= a.size(); i++) {
    for (int j = 0; j <= b.size(); j++) {
      if (i == 0 && j == 0) {
        dp[i][j] = 0;
      } else if (i == 0) {
        dp[i][j] = dp[i][j - 1] + 1;
      } else if (j == 0) {
        dp[i][j] = dp[i - 1][j] + 1;
      } else if (a[i - 1] == b[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1];
      } else {
        dp[i][j] = 1 + min(dp[i][j - 1], min(dp[i - 1][j - 1], dp[i - 1][j]));
      }
    }
  }
  cout << dp[a.size()][b.size()] << endl;

  return 0;
}
