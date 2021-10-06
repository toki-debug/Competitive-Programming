//Arissa Yoshida
//Problem 2. Milk Factory - http://www.usaco.org/index.php?page=viewproblem2&cpid=940
#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;

#define MAXN 101
vector<int> adj[MAXN];
vector<bool> visited(MAXN, false);
vector<int> r(MAXN);

void setIO(string s) {
  if (s.empty()) {
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
  } else {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

void dfs(int x) {
  if (visited[x]) {
    return;
  }
  r[x]++;
  visited[x] = true;
  for (int i = 0; i < adj[x].size(); i++) {
    dfs(adj[x][i]);
  }
}

int main() {
  no_tle_pls setIO("factory");
  int n;
  cin >> n;
  int a, b;
  for (int i = 1; i < n; i++) {
    cin >> a >> b;
    adj[a - 1].push_back(b - 1);
  }
  
  for(int i=0;i<n;i++){
    visited = vector<bool>(MAXN, false);
    dfs(i);
  }

  for (int i = 0; i < n; i++) {
    if (r[i] == n) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
