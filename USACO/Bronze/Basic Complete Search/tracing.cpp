//Arissa Yoshida
//Cowntact Tracing - http://www.usaco.org/index.php?page=viewproblem2&cpid=1037

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
  setIO("tracing");
  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  map<int, pair<int, int>> tempo;
  map<int, pair<int, int>>::iterator itr;
  for (int i = 0; i < t; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    tempo[a] = make_pair(b, c);
  }

  int minimok = t;
  int maximok = 0;
  int primeiro = 0;
  for (int i = 0; i < n; i++) {
    bool f = false;
    for (int j = 0; j <= t; j++) {
      string val(n, '0');
      vector<int> verifica(n, 0);
      val[i] = '1';

      for (itr = tempo.begin(); itr != tempo.end(); ++itr) {
        int a, b;
        a = itr->second.first - 1;
        b = itr->second.second - 1;
        bool a1 = (val[a] == '1'), a2 = (val[b] == '1');

        if (a1 && verifica[a] < j) {
          verifica[a]++;
          val[b] = '1';
        }
        if (a2 && verifica[b] < j) {
          verifica[b]++;
          val[a] = '1';
        }
      }
      if (val == s) {
        minimok = min(minimok, j);
        maximok = max(maximok, j);
        f = true;
      }
    }

    if (f) {
      primeiro++;
    }
  }

  cout << primeiro << " " << minimok << " ";
  if (maximok == t) {
    cout << "Infinity" << endl;
  } else {
    cout << maximok << endl;
  }
}
