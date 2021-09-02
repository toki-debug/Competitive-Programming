//Arissa Yoshida
//A. Tetris - https://codeforces.com/contest/961/problem/A
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n,m;
  cin >> n >> m;
  vector<int>v(n+1,0);
  int a;
  for(int i=0;i<m;i++){
    cin >> a;
    v[a]++;
  }
  int minimo = v[1];
  for(int i=2;i<=n;i++){
    minimo = min(minimo, v[i]);
  }
  cout << minimo << endl;
  return 0;
}
