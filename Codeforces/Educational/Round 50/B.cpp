//Arissa Yoshida
//B. Diagonal Walking v.2 - https://codeforces.com/contest/1036/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 100005
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int q;
  cin >> q;
  ll n, m, k;
  while (q--) {
    cin >> n >> m >> k;
    if (n < m) {
      swap(n, m);
    }
    if(n%2 != m%2){
      k-=1;
      n-=1;
    }else if(n%2 != k%2){
      k-=2;
      n-=1;
    }
    if(k<n){
      cout << -1 << endl;
    }else{
      cout << k << endl;
    }
   
  }
}
