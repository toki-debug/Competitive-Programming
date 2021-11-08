//Arissa Yoshida
//Block Game - http://www.usaco.org/index.php?page=viewproblem2&cpid=664

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
  setIO("blocks");
  int n;
  cin >> n;
  string s;
  vector<int> alfa(26);
  while (n--) {
    vector<int> w1(26);
    vector<int> w2(26);
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
      w1[s[i] - 'a']++;
    }
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
      w2[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
      alfa[i] += max(w1[i], w2[i]);
    }
  }
  for (int i = 0; i < 26; i++) {
    cout << alfa[i] << endl;
  }
}
