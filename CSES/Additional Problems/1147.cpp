//Arissa Yoshida
//Maximum Building I - https://cses.fi/problemset/task/1147

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

int main() {
  setIO("");
  fast_io int n, m;
  cin >> n >> m;
  ll maximo = 0;
  stack<ll> pilha;
  vector<vector<ll>> foresty(n + 1, vector<ll>(m));
  char c;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> c;
      if (c == '*') {
        foresty[i][j] = 0;
      } else {
        foresty[i][j] = foresty[i - 1][j] + 1;
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    int j = 0;
    while (j < m) {
      if (pilha.empty() || foresty[i][pilha.top()] <= foresty[i][j]) {
        pilha.push(j++);
      } else {
        int tp = pilha.top();
        pilha.pop();
        int tam;
        if (pilha.empty()) {
          tam = j;
        } else {
          tam = j - pilha.top() - 1;
        }

        maximo = max(maximo, foresty[i][tp] * tam);
      }
    }
    while (pilha.empty() == false) {
      int tp = pilha.top();
      pilha.pop();
      int tam;
      if (pilha.empty()) {
        tam = j;
      } else {
        tam = j - pilha.top() - 1;
      }

      maximo = max(maximo, foresty[i][tp] * tam);
    }
  }

  cout << maximo << endl;

  return 0;
}
