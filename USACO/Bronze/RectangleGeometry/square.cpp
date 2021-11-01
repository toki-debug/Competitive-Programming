//Arissa Yoshida
//Problem 1. Square Pasture - http://www.usaco.org/index.php?page=viewproblem2&cpid=663

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
  setIO("square");
  fast_io int a, b, c, d;
  int w, x, y, z;
  cin >> a >> b >> c >> d;
  cin >> w >> x >> y >> z;
  int r = max(max({a, w, c, y}) - min({a, w, c, y}),
              max({b, d, x, z}) - min({b, d, x, z}));

  cout << r * r << endl;
}
