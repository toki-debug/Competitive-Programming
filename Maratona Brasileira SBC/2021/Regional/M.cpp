// Arissa Yoshida
//M. Monarchy in Vertigo - Maratona de Programação 2021, ICPC
//Link Codeforces - https://codeforces.com/gym/103388/problem/M

#include <bits/stdc++.h>
using namespace std;
#define PI 2 * acos(0.0)
#define MAXN 100005
#define fast_io                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;
#define endl "\n";

void setIO(string s) {
  if (!s.empty()) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}
vector<int> family[MAXN];
vector<int> die(MAXN);
vector<int> tempomorte;
void dfs_iterativa() {
  int t = 0;
  stack<int> pilha;
  for (int i = family[t].size() - 1; i >= 0; i--) {
    pilha.push(family[t][i]); // incia pilha
  }
  for (int j = 0; j < tempomorte.size(); j++) {
    if (tempomorte[j] < die[t] || die[t] == 0) {
      cout << t+1 << endl;
    } else {
      while (!pilha.empty()) {
        t = pilha.top();
        pilha.pop();
        for (int k = family[t].size()-1; k >= 0; k--) {
          pilha.push(family[t][k]);
        }
        if (tempomorte[j] < die[t] || die[t] == 0) {
          cout << t+1 << endl;
          break;
        }
      }
    }
  }
}
int main() {
  // setIO("tracing");
  fast_io int q;
  cin >> q;
  int cont = 0;

  for (int i = 0; i < q; i++) {
    int t, x;
    cin >> t >> x;
    x-=1;
    if (t == 1) {
      cont++;
      family[x].push_back(cont); // Adciona filho de x
    } else {
      die[x] = i;
      tempomorte.push_back(i);
    }
  }
  dfs_iterativa();
  return 0;
}
