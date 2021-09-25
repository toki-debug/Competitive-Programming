//Arissa Yoshida
//C. Unique Number - https://codeforces.com/contest/1462/problem/C

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
  int n;
  int x;
  while (t--) {
    cin >> x;
    if (x > 45) {
      cout << -1 << endl;
    } else {
      if (x < 10) {
        cout << x << endl;
      } else {
        string s = "";
        int sum = 0;
        for (int i = 9; i >= 1; i--) {
          if (sum + i <= x) {
            s += (i + '0');
            sum += i;
          }
        }
        for (int i =s.size()-1; i >= 0; i--) {
          cout << s[i];
        }
        cout << endl;
      }
    }
  }
  return 0;
}
