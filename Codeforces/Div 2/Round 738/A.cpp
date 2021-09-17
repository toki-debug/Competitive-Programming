//GDB
//A. Mocha and Math - https://codeforces.com/contest/1559/problem/A

#include <bits/stdc++.h>
#define MAXN 10000000
#define MAX 4001
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<ll>v;
    for(int i=0;i<n;i++){
      ll a;
      cin >>a;
      v.push_back(a);
    }
    ll r=v[0];
    for(int i=1;i<n;i++){
      r&=v[i];
    }
    cout << r << endl;
  }

  return 0;
}
