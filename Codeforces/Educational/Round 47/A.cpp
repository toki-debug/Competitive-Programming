//Arissa Yoshida
//A. Game Shopping - https://codeforces.com/contest/1009/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 100005
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  queue<int>a;
  vector<int>c;
  int n,m;
  cin >> n >> m;
  for(int i=0;i<n;i++){
    int v;
    cin >> v;
    c.push_back(v);
  }
  for(int i=0;i<m;i++){
    int v;
    cin >> v;
    a.push(v);
  }
  int j=0;
  int jogos =0;
  while(!a.empty()){
    if(a.front()>=c[j]){
      jogos++;
      a.pop();
    }
    if(j==n-1){
      break;
    }
    j++;
  }
  cout << jogos << endl;

}
