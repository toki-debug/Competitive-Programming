//Arissa Yoshida
//A. Vasya And Password - https://codeforces.com/contest/1051/problem/A

#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);

#define endl '\n'

typedef long long ll;

int main() {
  no_tle_pls int t;
  int n;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    vector<int> v(3);
    for (int i = 0; i < s.size(); i++) {
      if (s[i] >= 'a' && s[i] <= 'z') {
        v[0]++;
      } else if (s[i] >= 'A' && s[i] <= 'Z') {
        v[1]++;
      } else {
        v[2]++;
      }
    }
    int c = 0;
    int maior = 1;
    int menor = 0;
    for (int i = 0; i < 3; i++) {
      if (v[i] != 0) {
        c++;
      } else {
        menor = i + 1;
      }
      if (i > 0) {
        if (v[i] > maior) {
          maior = i + 1;
        }
      }
    }

    if (c == 2) {
      if (maior == 1) {
        for (int i = 0; i < s.size(); i++) {
          if (s[i] >= 'a' && s[i] <= 'z') {
            if (menor == 2) {
              s[i] = 'A';
            } else {
              s[i] = '1';
            }
            break;
          }
        }
      } else if (maior == 2) {
        for (int i = 0; i < s.size(); i++) {
          if (s[i] >= 'A' && s[i] <= 'Z') {
            if (menor == 1) {
              s[i] = 'a';
            } else {
              s[i] = '1';
            }
            break;
          }
        }

      } else {
        for (int i = 0; i < s.size(); i++) {
          if (s[i] >= '0' && s[i] <= '9') {
            if (menor == 1) {
              s[i] = 'a';
            } else {
              s[i] = 'A';
            }
            break;
          }
        }
      }
    } else if (c == 1) {
      if (v[0] == 0 && v[1] == 0) {
        s[0] = 'a';
        s[1] = 'A';
      } else if (v[1] ==0&& v[2]==0) {
        s[0] = 'A';
        s[1] = '1';
      } else {
        s[0] = 'a';
        s[1] = '1';
      }
    }
    cout << s << endl;
  }

  return 0;
}
