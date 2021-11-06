//Arissa Yoshida
//A. Minutes Before the New Year - https://codeforces.com/contest/1283/problem/A

#include <bits/stdc++.h>
using namespace std;
 
#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
 
#define endl '\n'
 
typedef long long ll;
 
int main() {
  no_tle_pls
  int t;
  cin >> t;
  while(t--){
    int h,m;
    cin >> h >> m;
    h*=60;
    h+=m;
 
    cout << 1440 - h << endl;
  }
 
  return 0;
}
