//Arissa Yoshida
//B - Students in Railway Carriage - https://codeforces.com/contest/962/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;
typedef vector<int> vec;
typedef vector<pa> vep;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;

  int tam = 0;

  int aa = a, bb = b;
  if (a < b) {
    swap(a, b);
  }
  if (s[0] == '.') {
    s[0] = 'a';
    a--;
    tam++;
  }
  for (int i = 1; i < s.size(); i++) {
    if (s[i - 1] == '*' && b > a) {
      swap(a, b);
    }
    if (s[i] == '.') {
      if ((a != 0) && s[i - 1] != 'a') {
        s[i] = 'a';
        a--;
        tam++;

      } else if ((b != 0) && s[i - 1] != 'b') {
        s[i] = 'b';
        tam++;
        b--;
      }
    }
  }

  cout << tam << endl;
}
