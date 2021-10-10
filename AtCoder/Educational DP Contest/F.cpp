//Arissa Yoshida
//F - LCS - https://atcoder.jp/contests/dp/tasks/dp_f

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast_io                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define mod 1000000007
#define MAX 100000000000007

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
  fast_io string a, b;
  cin >> a >> b;

  vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, 0));
  for (int i = 1; i <= a.size(); i++) {
    for (int j = 1; j <= b.size(); j++) {
      if (a[i - 1] == b[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      } else {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  /*for(int i=0;i<=a.size();i++){
    for(int j=0;j<=b.size();j++){
      cout << dp[i][j] << " ";
    }
    cout << endl;
  }*/

  string s = "";
  int i = a.size(), j = b.size();

  while (dp[i][j] != 0) {
    if (dp[i][j] > dp[i - 1][j] && dp[i][j] > dp[i][j - 1]) {
      s += a[i - 1];
      i--;
      j--;

    } else if (dp[i][j] == dp[i - 1][j]) {
      i--;
    } else if (dp[i][j] == dp[i][j - 1]) {
      j--;
    }
  }
  reverse(s.begin(), s.end());
  cout << s << endl;
}
