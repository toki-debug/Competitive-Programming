//Arissa Yoshida
//Problem 1. Blocked Billboard II - http://www.usaco.org/index.php?page=viewproblem2&cpid=783

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
  setIO("billboard");
  fast_io int a, b, c, d;
  int w, x, y, z;
  cin >> a >> b >> c >> d;
  cin >> w >> x >> y >> z;
  ll r = 0;
  int hor = (c - a) - max(0, min(c, y) - max(a, w));
  int ver = (d - b) - max(0, min(d, z) - max(b, x));

  if (ver == 0 && hor == 0) {
    r = 0;
  } else if (hor == 0) {
    if (x > b && z < d) {
      r = (c - a) * (d - b);
    } else {
      r = ver * (c - a);
    }

  } else if (ver == 0) {
    if (w > a && y < c) {
      r = (c - a) * (d - b);
    } else {
      r = hor * (d - b);
    }

  } else {
    r = (c - a) * (d - b);
  }
  cout << r << endl;
}
