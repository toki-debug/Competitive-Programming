// Arissa Yoshida
// Bovine Genomics - http://www.usaco.org/index.php?page=viewproblem2&cpid=739

#include <bits/stdc++.h>
using namespace std;
#define PI 2 * acos(0.0)
#define fast_io                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;

void setIO(string s) {
  if (!s.empty()) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

int main() {
  setIO("cownomics");
  int n, m;
  cin >> n >> m;
  vector<string> v(n);
  vector<string> v2(n);
  for (int j = 0; j < n; j++) {
    string s;
    cin >> v[j];
  }
  for (int j = 0; j < n; j++) {
    string s;
    cin >> v2[j];
  }
  ll r = 0;
  map<char, int> alfa;
  alfa['A'] = 0;
  alfa['C'] = 1;
  alfa['G'] = 2;
  alfa['T'] = 3;

  for (int i = 0; i < m - 2; i++) {
    for (int j = i + 1; j < m - 1; j++) {
      for (int k = j + 1; k < m; k++) {
        vector<bool> bas(64);
        int f = 1;
        for (int l = 0; l < n; l++) {
          int pos = alfa[v[l][i]] * 16 + alfa[v[l][j]] * 4 + alfa[v[l][k]];
          bas[pos] = true;
        }
        for (int l = 0; l < n; l++) {
          int pos = alfa[v2[l][i]] * 16 + alfa[v2[l][j]] * 4 + alfa[v2[l][k]];
          if (bas[pos] == true) {
            f = 0;
            break;
          }
        }
        if (f) {
          r++;
        }
      }
    }
  }

  cout << r << endl;
}
