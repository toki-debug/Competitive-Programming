//Arissa Yoshida
//C. Minimum Extraction - https://codeforces.com/contest/1607/problem/C
#include <bits/stdc++.h>
using namespace std;
 
#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
 
#define endl '\n'
 
typedef long long ll;
 
int main() {
  no_tle_pls int t;
  cin >> t;
 
  ll x, n;
 
  while (t--) {
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
      cin >> v[i];
    }
    sort(v.begin(),v.end());
 
    ll num = v[0];
    for(int i=1;i<v.size();i++){
      num = max(num,v[i] - v[i-1]);
    }
 
      cout << num << endl;
    }
  
 
  return 0;
}
