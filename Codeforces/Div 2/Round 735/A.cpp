//Toki & Xilsu
//A. Cherry - https://codeforces.com/contest/1554/problem/A

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
  ll t;
  cin >> t;
  ll n;
  while(t--){
    cin >> n;
    vector<ll>v;
    ll a;
    for(ll i=0;i<n;i++){
      cin >> a;
      v.push_back(a);
    }
    ll mult=1;
    ll maximo = 0;
    for(ll i=1;i<n;i++){
      mult = v[i]*v[i-1];
      maximo = max(mult,maximo);
    }
    cout << maximo << endl;
  }
  
  return 0;
}
