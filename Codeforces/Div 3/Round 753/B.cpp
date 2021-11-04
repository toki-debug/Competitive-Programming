//Arissa Yoshida
//B. Odd Grasshopper - https://codeforces.com/contest/1607/problem/B

#include <bits/stdc++.h>
using namespace std;
 
#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
 
#define endl '\n'
 
typedef long long ll;
 
int main() {
  //no_tle_pls
  int t;
  cin >> t;
  
  ll x,n;
  
 
  while(t--){
    cin >> x >> n;
    ll  v = n%4;
    for(ll i=n-v+1;i<=n;i++){
      (x&1)? x+=i : x-=i;
    }
    cout << x << endl;
    
  }
 
  return 0;
}
