//Arissa Yoshida
//Maratona Brasileira de Popcorn - Maratona de Programação 2019, SBC
//Problema M
//Link URI - https://www.urionlinejudge.com.br/judge/en/problems/view/2973

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
  ll n, c, t;
  cin >> n >> c >> t;
  vector<ll> v(n, 0);
  vector<ll> soma(n + 1, 0);

  ll maior = 0;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    soma[i + 1] = soma[i] + v[i];
    maior = max(maior, v[i]);
  }
  ll ini = 0, fim = soma[n], mid;
  ll tempo;
  ll r = LONG_LONG_MAX;
  while (ini <= fim) {
    tempo = 0;
    mid = (ini + fim) / 2;
    ll count = 0;
    ll sum = 0;

    for (ll i = 0; i < v.size(); i++) {
      sum += v[i];
      if (sum > mid) {
        sum -= v[i];

        tempo =
            max(tempo, (sum + t - 1) / t); // Pegar o arredondamento para cima
        sum = v[i];

        count++;
      } else if (sum == mid) {
        tempo =
            max(tempo, (sum + t - 1) / t); // Pegar o arredondamento para cima
        sum = 0;
        count++;
      }
    }
    if (sum != 0) {
      tempo = max(tempo, (sum + t - 1) / t);
      count++;
    }
    if (count <= c) {
      r = min(r, tempo);
      fim = mid - 1;
    } else {
      ini = mid + 1;
    }
  }
  cout << r << endl;

  return 0;
}

