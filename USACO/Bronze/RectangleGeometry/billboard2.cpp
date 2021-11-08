#include <bits/stdc++.h>

using namespace std;
#define MAX 31622777
#define mod 1000000007

#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;

void setIO(string s) {
  if (s.empty()) {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  } else {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

int main() {
  no_tle_pls
      setIO("billboard");
      int x1,
      y1, x2, y2, a1, b1, a2, b2;
  cin >> x1 >> y1 >> x2 >> y2;
  cin >> a1 >> b1 >> a2 >> b2;
  int area = abs(x1 - x2) * abs(y1 - y2);
  if (x1 >= a1 && y1 >= b1 && x2 <= a2 && y2 <= b2) {
    area = 0;
  } else if ((x1 >= a1 && x2 <= a2 && !(b1>y1 && b2<y2)) || (y1 >= b1 && y2 <= b2 && !(a1>x1 && a2<x2))) {
    area -= abs(max(x1,a1)-min(x2,a2)) * abs(max(y1,b1)-min(y2,b2));
  }
  cout << area << endl;
}
