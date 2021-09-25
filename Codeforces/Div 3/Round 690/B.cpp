//Arissa Yoshida
//B. Last Year's Substring - https://codeforces.com/contest/1462/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;
typedef vector<int> vec;
typedef vector<pa> vep;

#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define mod 1000000007
#define MAX 1000000007

int main() {
  no_tle_pls int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0;
    string r = "2020";
    int f = 0;
    int aqui = 0;
    int pass = 0;
    int v = 0;

    for (int j = 0; j <= 3; j++) {
      if (s[j] == r[j]) {
        if (r.substr(j + 1, 4 - j) == s.substr(n - (3 - j), 4 - j)) {
          aqui = 1;
          break;
        }
      } else {
        aqui = 0;
        break;
      }
    }

    if (!aqui) {
      if (s[0] == r[0] && s[1] == r[1] && s[2] == r[2] && s[3] == r[3]) {
        aqui = 1;
      } else {
        aqui = 0;
      }
    }
    if (!aqui) {
      if (s[n - 4] == r[0] && s[n - 3] == r[1] && s[n - 2] == r[2] &&
          s[n - 1] == r[3]) {
        aqui = 1;
      } else {
        aqui = 0;
      }
    }

    if (aqui) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
