//Arissa Yoshida
//B Frog 2 - https://atcoder.jp/contests/dp/tasks/dp_b

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXN 100005


int main() {
  int n,k;
  cin >> n >> k;
  int a;
  vector<int>v;
  vector<int>menor(n,INT_MAX);
  for(int i=0;i<n;i++){
    cin >> a;
    v.push_back(a);
  }

  menor[0]=0;
  menor[1]=abs(v[1]-v[0]);
  for(int i=2;i<v.size();i++){

    for(int j=1;j<=k;j++){
      if(j>i){
        break;
      }
      menor[i] = min(abs(v[i]-v[i-j])+menor[i-j],menor[i]);
    }
    
  }
  cout << menor[v.size()-1];
  return 0;
}
