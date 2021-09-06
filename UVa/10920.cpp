//Arissa Yoshida
//10920	- Spiral Tap - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1861
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 100005
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll x, y;
  while (cin >> x >> y) {
    if (x == 0 && y == 0) {
      break;
    }
    ll a = sqrt(y);
    if (a * a == y) {
      a -= 1;
    }

    ll b = a + 1;
    ll c = b * b - b;
    ll meio = (x + 1) / 2, coluna, linha;

    if (b % 2) {
      linha = meio - (b / 2);
      if (y > c) {
        coluna = (b / 2) + meio;
        linha += (y - (c)) - 1;

      } else {
        coluna = meio - (b / 2);
        coluna += y - (a * a) - 1;
      }
    } else {
      linha = meio + (b / 2);
      if (y > c) {
        coluna = meio - (b / 2);
        linha -= y - c - 1;

      } else {
        coluna = meio + (b / 2);
        coluna -= y - (a * a);
      }
    }
    cout << "Line = " << linha << ", column = " << coluna << "." << endl;
  }
}
