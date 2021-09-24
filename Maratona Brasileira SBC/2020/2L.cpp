//Arissa Yoshida
//L. Lola's Schedule - Maratona de Programação 2020, ICPC
//Link Codeforces - https://codeforces.com/gym/103185/problem/L

#include <bits/stdc++.h>
#define MAXN 10000000

using namespace std;
typedef long long ll;
ll MOD = 1000000007;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, x;
  cin >> n >> x;
  int a, b;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    v.push_back(make_pair(a, a + b));
  }
  int val = 0;

  int res1 = 0, res2 = INT_MAX;
  for (int i = 0; i <= 480; i++) {
    int qtd = 0;
    for (int j = 0; j < v.size(); j++) {
      if (i > v[j].second) {
        continue;
      }
      val = 0;
      ll ns, nf;
      ns = max(i, v[j].first);
      ns = ((ns-i)+(x-1))/x;
      nf = (v[j].second - i)/x;
      if (nf >= ns) {
        qtd += nf - ns + 1;
      }
    }
    if (qtd < res2) {
      res1 = i;
      res2 = qtd;
    }
  }
  cout << res1 << " " << res2 << endl;

  return 0;
}
