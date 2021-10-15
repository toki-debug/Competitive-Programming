//Arissa Yoshida
//Building Roads - https://cses.fi/problemset/task/1666/

#include <bits/stdc++.h>
using namespace std;

#define fast_io                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;

#define mod 1000000007
#define MAXN 100005

vector<int> v(MAXN);
vector<int> adj[MAXN];
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
  if (v[x]) {
    return;
  }
  v[x] = 1;
  for (int i = 0; i < adj[x].size(); i++) {
    dfs(adj[x][i]);
  }
}
int main() {
  // setIO("");
  // fast_io
  int n, m;
  cin >> n >> m;
  int a, b;
  vector<int> visited(n, 0);

  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    adj[a - 1].push_back(b - 1);
    adj[b - 1].push_back(a - 1);
  }
  int cont = 0;
  vector<int> val;
  v = vector<int>(n, 0);
  for (int i = 0; i < n; i++) {
    if (!v[i]) {

      val.push_back(i);
      cont++;
      dfs(i);
    }
  }
  cout << val.size() - 1 << endl;
  for (int i = 1; i < val.size(); i++) {
    cout << val[0] + 1 << " " << val[i] + 1 << endl;
  }
}
