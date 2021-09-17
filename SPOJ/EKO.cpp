//Arissa Yoshida
//EKO - Eko -https://www.spoj.com/problems/EKO/

#include <bits/stdc++.h>
#define MAXN 10000000
#define MAX 4001
using namespace std;
typedef long long ll;
ll MOD = 1000000007;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, m;
  cin >> n >> m;
  vector<ll> v(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  ll ini = v[0];
  ll fim = v[n - 1];
  ll total = 0;
  ll mid;
  ll melhor = 0;
  while (ini <= fim) {
    mid = (ini + fim) / 2;
    total = 0;

    for (ll j = 0; j < n; j++) {
      ll resto = v[j] - mid;
      if (resto < 0) {
        resto = 0;
      }
      total += resto;
    }
    if (total >= m) {
      ini = mid + 1;
      melhor = max(melhor, mid);
    } else if (total < m) {
      fim = mid - 1;
    }
  }
  cout << melhor << endl;

  return 0;
}
