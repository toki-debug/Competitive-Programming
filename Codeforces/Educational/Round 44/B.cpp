//Arissa Yoshida
//B. Switches and Lamps - https://codeforces.com/contest/985/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;
typedef vector<int> vec;
typedef vector<pa> vep;

int main() {
  int n,m;
  cin >> n >> m;
  vector<int>v(m,0);
  
  int mat[n+1][m+1];
  for(int i=0;i<n;i++){
    string s;
    cin >> s;
    for(int j=0;j<m;j++){
      mat[i][j] =s[j]-'0';
      if(s[j]=='1'){
        v[j]++;
      }
    }
    }
    bool ver;
    for(int i=0;i<n;i++){
     
      ver = true;
      for(int j=0;j<m;j++){
        if(mat[i][j]==1 && v[j]==1){
          ver = false;
        }
      }
      if(ver){
        cout << "YES" << endl;
        return 0;
      }
        
      
    }
    cout << "NO" << endl;
  
  
}
