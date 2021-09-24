//Arissa Yoshida
//L. Leverage MDT- Maratona de Programação 2019, ICPC
//Problema L
//Link Codeforces - https://codeforces.com/gym/102428/problem/L

#include <bits/stdc++.h>
#define MAXN 10000000

using namespace std;
typedef long long ll;
ll MOD = 1000000007;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m;
  cin >> n >> m;
  int vet[n][m];

  for (int i = 0; i < n; i++) {
    int g = 0, b = 0;
    for (int j = 0; j < m; j++) {
      char c;
      cin >> c;
      if (c == 'G') {
        g++;
        b = 0;
      } else if (c == 'B') {
        b++;
        g = 0;
      }
      vet[i][j] = max(g, b);
    }
  }
  ll ini = 1, fim = n;
  ll mid;
  ll save = 0;
  while (ini <= fim) {
    mid = (fim + ini) / 2;
    int c = 0;
    int maximo = 0;
    for (int j = 0; j < m; j++) {
      int x = 0;
      for (int i = 0; i < n; i++) {
        if (vet[i][j] >= mid) {
          x++;
        } else {
          x = 0;
        }
        if (x == mid) {
          c = 1;
          j = m;
          break;
        }
      }
    }
    if (c) {
      save = mid * mid;
      ini = mid + 1;
    } else {
      fim = mid - 1;
    }
  }
  cout << save << endl;

  return 0;
}
