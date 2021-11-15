//Arissa Yoshida
//C. Creating Multiples - Maratona de Programação 2021, ICPC
//Link Codeforces - https://codeforces.com/gym/103388/problem/C

#include <bits/stdc++.h>
using namespace std;
#define PI 2 * acos(0.0)
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
  // setIO("tracing");
  fast_io int b, l;
  cin >> b >> l;
  vector<int> v(l + 1);
  int par = 0, impar = 0;
  for (int i = 1; i <= l; i++) {
    cin >> v[i];
    if (i % 2) {
      impar -= v[i];
    } else {
      par += v[i];
    }
  }
  b += 1;
  int mod_par = ((par + impar) % b + b) % b;
  int mod_impar = b - mod_par;
  
  if ((par + impar) % b == 0) {
    cout << 0 << " " << 0 << endl;
    return 0;
  }
  for (int i = 1; i <= l; i++) {
    if (i % 2) {
      if (v[i] >= mod_impar) {
        cout << i << " " << v[i] - mod_impar << endl;
        return 0;
      }
    } else {
      if (v[i] >= mod_par) {
        cout << i << " " << v[i] - mod_par << endl;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << endl;

  return 0;
}
