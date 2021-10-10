//Arissa Yoshida
//G - Longest Path - https://atcoder.jp/contests/dp/tasks/dp_g
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

int visited[MAX] = {0};
int dp[MAX] = {0};
int t = 0;
vector<int> adj[MAX];
void dfs(int x) {
  visited[x] = 1;

  for (int i = 0; i < adj[x].size(); i++) {
    if (!visited[adj[x][i]]) {
      dfs(adj[x][i]);
    }
    dp[x] = max(dp[x], 1 + dp[adj[x][i]]);
  }
}
int main() {
  // setIO("");
  fast_io int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
  }
  int r = 0;
  for (int i = 1; i <= n; i++) {
    if (visited[i] == 0) {
      dfs(i);
    }
  }
  for (int i = 1; i <= n; i++) {
    r = max(r, dp[i]);
  }

  cout << r << endl;
  return 0;
}
