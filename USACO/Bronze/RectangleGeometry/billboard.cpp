//Arissa Yoshida
//Problem 1. Blocked Billboard - http://www.usaco.org/index.php?page=viewproblem2&cpid=759

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
  fast_io int area = 0;
  vector<vector<int>> v(3, vector<int>(4));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> v[i][j];
    }
    if (i < 2) {
      area += (v[i][2] - v[i][0]) * (v[i][3] - v[i][1]);
    }
  }
  int base;
  int altura;
  int area_intersec=0;
  for(int i=0;i<2;i++){
    base= max(min(v[i][2],v[2][2])-max(v[i][0],v[2][0]),0);
    altura =max(0,(min(v[i][3],v[2][3])-max(v[i][1],v[2][1])));
    area_intersec+=(base*altura);
  }
  cout << area - area_intersec << endl;
  
}



/*Using struct
#include <bits/stdc++.h>
using namespace std;

struct Rect {
	int x1, y1, x2, y2;
	int area() { return (y2 - y1) * (x2 - x1); }
};

int intersect(Rect p, Rect q) {
	int xOverlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
	int yOverlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
	return xOverlap * yOverlap;
}

int main() {
	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);

	Rect a, b, t;  // billboards a, b, and the truck
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
	cout << a.area() + b.area() - intersect(a, t) - intersect(b, t) << endl;
}
*/
