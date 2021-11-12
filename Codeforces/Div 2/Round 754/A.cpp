//Arissa Yoshida
//A. A.M. Deviation - https://codeforces.com/contest/1605/problem/A
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
  // setIO("tracing");
  fast_io 
  int t;
  cin >> t;
  
  while (t--) {
   ll a,b,c;
   cin >> a >> c >> b;
   if(abs(a+b - (2*c))%3!=0){
     cout << 1 << endl;
   }else{
     cout << 0 << endl;
   }
  }
}
