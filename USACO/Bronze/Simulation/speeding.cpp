//Arissa Yoshida
//Speeding Ticket - http://www.usaco.org/index.php?page=viewproblem2&cpid=568

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
  setIO("speeding");
  int n, m;
  cin >> n >> m;
  vector<int> v(100);
  int j = 0;
  int jj = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    for (j = jj; j < jj + a; j++) {
      v[j] = b;
    }
    jj += a;
  }
  jj = 0;
  int t = 0;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    for (j = jj; j < a + jj; j++) {
      if (v[j] < b) {
        t = max(b - v[j], t);
      }
    }
    jj += a;
  }
  cout << t << endl;
}
