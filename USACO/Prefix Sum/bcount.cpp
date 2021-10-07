//Arissa Yoshida
//Breed Counting - http://www.usaco.org/index.php?page=viewproblem2&cpid=572

#include <bits/stdc++.h>
using namespace std;

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
  no_tle_pls setIO("bcount");
  int n,q;
  cin >> n >> q;
  vector<vector<int>>mat(3,vector<int>(n+1,0));
  for(int i=1;i<=n;i++){
    int c;
    cin >> c;
    mat[c-1][i]++;
    for(int j=0;j<3;j++){
      mat[j][i]+=mat[j][i-1];
    }
  }

  int a,b;

  while(q--){
    cin >> a >> b;
    for(int i=0;i<3;i++){
      if(i==0){
         cout << mat[i][b] - mat[i][a-1];
      }else{
         cout <<" "<<  mat[i][b] - mat[i][a-1];
      }
     
    }
    cout << endl;
  }
  
  return 0;
}
