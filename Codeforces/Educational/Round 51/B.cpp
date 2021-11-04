//Arissa Yoshida
//B. Relatively Prime Pairs - https://codeforces.com/contest/1051/problem/B

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
  ll a,b;
  cin >> a >> b;
  cout << "YES" <<  endl;
  for(ll i=a;i<=b;i+=2){
    cout << i << " " << i+1 << endl;
  }

  return 0;
}
