//Arissa Yoshida
//A. Puzzles - https://codeforces.com/contest/337/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  vector<int>v;
  cin >> n >> m;
  int a;
  for(int i=0;i<m;i++){
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(),v.end());
  int minimo =999999;
  for(int i=0;i<=m-n;i++){
   minimo = min(minimo, abs(v[i]-v[i+(n-1)])); 
  }
  cout << minimo << endl;
  return 0;
}

