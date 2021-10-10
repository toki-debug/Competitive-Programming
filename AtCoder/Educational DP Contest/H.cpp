//Arissa Yoshida
//H - Grid 1 - https://atcoder.jp/contests/dp/tasks/dp_h
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
  fast_io int h, w;
  ll r;
  cin >> h >> w;
  vector<vector<int>> dp(h + 1, vector<int>(w + 1, 0));
  char c;  
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      cin >> c;
      if (c == '.') {
        if (j == 1 && i == 1) {
          dp[i][j] = 1;
        } else {
          dp[i][j] = (dp[i - 1][j] + dp[i][j - 1])%mod;
        }
      }
    }
  }
  cout << dp[h][w] << endl;
  return 0;
}
