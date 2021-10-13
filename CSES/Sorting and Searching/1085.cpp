//Arissa Yoshida
//Array Division - https://cses.fi/problemset/task/1085/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast_io                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define mod 1000000007
#define MAX 100005

void setIO(string s) {
  if (s.empty()) {
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
  } else {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

int main() {
  // setIO("haybales");
  fast_io ll n, k;
  cin >> n >> k;
  vector<int> v(n, 0);
  ll menor = 0;
  ll maior = 1;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    menor = max((ll)v[i], menor);
    maior += v[i];
  }
  ll ans = 0, meio,r = 0;

  while (menor <= maior) {
    meio = (maior + menor) / 2;
    ll sum = 0;
    ans = 0;
    for (int i = 0; i < n; i++) {
      if (v[i] > meio) {
        ans = k + 1;
        break;
      } else if (v[i] + sum > meio) {
        sum = 0;
        ans++;
      }
      sum += v[i];
    }
    if (sum > 0) {
      ans++;
    }

    if (ans > k) {
      menor = meio + 1;
    } else {
      r = meio;
      maior = meio - 1;
    }
  }
  cout << r << endl;

  return 0;
}
