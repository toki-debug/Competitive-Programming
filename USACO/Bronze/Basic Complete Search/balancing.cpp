// Arissa Yoshida
// Load Balancing - http://www.usaco.org/index.php?page=viewproblem2&cpid=617

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
  setIO("balancing");
  int n, m;
  cin >> n >> m;
  int a, b;
  vector<int> x;
  vector<int> y;
  vector<pair<int, int>> pos;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    pos.push_back(make_pair(a, b));
  }
  int res = m;
  for (int k = 0; k < n; k++) {
    for (int j = 0; j < n; j++) {
      int se = 0, so = 0, ne = 0, no = 0;
      for (int i = 0; i < n; i++) {
        if (pos[i].second > pos[j].second + 1 &&
            pos[i].first > pos[k].first + 1) {
          ne++;
        } else if (pos[i].second < pos[j].second + 1 &&
                   pos[i].first < pos[k].first + 1) {
          so++;
        } else if (pos[i].second > pos[j].second + 1 &&
                   pos[i].first < pos[k].first + 1) {
          no++;
        } else {
          se++;
        }
      }
      res = min(res, max({ne, no, se, so}));
    }
  }

  cout << res << endl;
}
