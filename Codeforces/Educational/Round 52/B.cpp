//Arissa Yoshida
//B. Vasya and Isolated Vertices - https://codeforces.com/contest/1065/problem/B

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
  ll n, m;
  cin >> n >> m;
  if(m==0){
    cout << n << " " << n << endl;
    return 0;
  }
  ll i;
  for (i = 1; i <= n; i++) {
    ll res = i * (i - 1) / 2;
    if (res >= m) {
      break;
    }
  }
  ll minimo = max((ll)0, n - (2 * m));
  cout << minimo << " " << max(0LL,n-i) << endl;

  return 0;
}

