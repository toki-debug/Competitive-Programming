//Arissa Yoshida
//A Frog 1 - https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXN 100005


int main() {
  int n;
  cin >> n;
  int a;
  vector<int>v;
  vector<int>menor(n,0);
  for(int i=0;i<n;i++){
    cin >> a;
    v.push_back(a);
  }


  menor[1]=abs(v[1]-v[0]);
  for(int i=2;i<v.size();i++){
    menor[i] = min(abs(v[i]-v[i-1])+menor[i-1],abs(v[i]-v[i-2])+menor[i-2]);
  }
  cout << menor[v.size()-1];
  return 0;
}
