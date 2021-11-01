//Arissa Yoshida
//Problem 1. Fence Painting - http://www.usaco.org/index.php?page=viewproblem2&cpid=567

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


void solution_2(){
    int a, b, c, d;
	cin >> a >> b >> c >> d;

	int total = (b - a) + (d - c);  // the sum of the two intervals
	int intersection = max(min(b, d) - max(a, c), 0);  // subtract the intersection
	int ans = total - intersection;
    
    cout << ans << endl;
}

int main() {
  setIO("paint");
  fast_io 
  int a,b,c,d;
  cin >> a >> b;
  cin >> c >> d;
  if((c>b && d>b)||(c<a&&d<a)){
    cout << (d-c) + (b-a) << endl;
  }else{
    cout << max({a,b,c,d})-min({a,b,c,d}) << endl;
  }
  
}





