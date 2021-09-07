//Arissa Yoshida
//A. Palindromic Twist - https://codeforces.com/contest/1027/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 100005
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string a = "";
    string b = "";
    char c;
    for (int i = 0; i < n / 2; i++) {
      cin >> c;
      a += c;
    }
    for (int i = n / 2; i < n; i++) {
      cin >> c;
      b += c;
    }
    reverse(b.begin(), b.end());
    int f = 0;
    for (int i = 0; i < n / 2; i++) {
      if (!(a[i] + 1 == b[i] - 1 || a[i] + 1 == b[i] + 1 ||
            a[i] - 1 == b[i] + 1 || a[i] - 1 == b[i] - 1 || a[i] == b[i])) {
        f = 1;
        break;
      }
    }
    if (f) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
}
