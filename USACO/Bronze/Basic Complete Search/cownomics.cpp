//Arissa Yoshida
//Bovine Genomics - http://www.usaco.org/index.php?page=viewproblem2&cpid=736

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
  setIO("cownomics");
  int n, m;
  cin >> n >> m;
  vector<map<char, int>> v(m);
  vector<int> v2(m);
  for (int j = 0; j < n; j++) {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
      v[i][s[i]]++;
    }
  }
  for (int j = 0; j < n; j++) {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
      if (v[i][s[i]] == 0) {
        v2[i]++;
      }
    }
  }
  int r =0;
  for(int i=0;i<m;i++){
    if(v2[i]==n){
      r++;
    }
  }
  cout << r  << endl;
}
