//Arissa Yoshida
//A. Vasya and Chocolate - https://codeforces.com/contest/1065/problem/A

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
  while (t--) {
    ll a, b, c, s;
    cin >> s >> a >> b >> c;
    ll qtd = s / c;
    ll add = qtd / a;

    cout << qtd + (add * b) << endl;
  }

  return 0;
}

