#include <bits/stdc++.h>
using namespace std;
//Arissa Yoshida
//Problem 2. Hoof, Paper, Scissors - http://www.usaco.org/index.php?page=viewproblem2&cpid=691

#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;

#define MAXN 101

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
  no_tle_pls setIO("hps");
  int n;
  cin >> n;
  vector<int> h(n + 1, 0);
  vector<int> p(n + 1, 0);
  vector<int> s(n + 1, 0);

  char c;
  for (int i = 1; i <= n; i++) {

    cin >> c;
    h[i] = h[i - 1];
    p[i] = p[i - 1];
    s[i] = s[i - 1];

    if (c == 'P') {
      s[i]++;
    } else if (c == 'H') {
      p[i]++;
    } else {
      h[i]++;
    }
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    ans = max(h[i] + p[n] - p[i - 1], ans);
    ans = max(h[i] + s[n] - s[i - 1], ans);
    ans = max(p[i] + h[n] - h[i - 1], ans);
    ans = max(p[i] + s[n] - s[i - 1], ans);
    ans = max(s[i] + h[n] - h[i - 1], ans);
    ans = max(s[i] + p[n] - p[i - 1], ans);
  }
  cout << ans << endl;

  return 0;
}
