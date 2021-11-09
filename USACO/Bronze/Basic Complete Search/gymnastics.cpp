//Arissa Yoshida
//Cow Gymnastics - http://www.usaco.org/index.php?page=viewproblem2&cpid=963

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
  setIO("gymnastics");
  int k,n;
  cin >> k >> n;
  int v[k][n];
  for(int i=0;i<k;i++){
    for(int j=0;j<n;j++){
      int a;
      cin >> a;
      v[i][a-1] = j;
    }
  }
  int g=0;
  int r=0;
  for(int i=0;i<n;i++){
    
    for(int j=i+1;j<n;j++){
      g=0;
      int gg =0;
      for(int l =0;l<k;l++){
        if(v[l][i]>v[l][j]){
          g++;
        }
        if(v[l][i]<v[l][j]){
          gg++;
        }
      }
      if(abs(g)==k || abs(gg)==k){
        r++;
      }
    }
  }
  cout << r << endl;
}
