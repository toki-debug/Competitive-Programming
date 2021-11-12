//Arissa Yoshida
//B. Reverse Sort - https://codeforces.com/contest/1605/problem/B

#include <bits/stdc++.h>
using namespace std;
#define PI 2 * acos(0.0)
#define fast_io                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;

void setIO(string s) {
  if (!s.empty()) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

int main() {
  // setIO("tracing");
  fast_io int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int j = 0;
    vector<int> zeros;
    vector<int> um;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        um.push_back(i + 1);
      }
    }
    int c = s.size()-um.size();
    for (int i = n - 1; i >= c; i--) {

      if (s[i] == '0') {
        zeros.push_back(i + 1);

      } else {
        um.pop_back();
      }
    }

    if (zeros.size() == 0) {
      cout << 0 << endl;
    } else {
      cout << 1 << endl;
      cout << um.size() * 2 << " ";
      for (int j = 0; j < um.size(); j++) {
        cout << um[j] << " ";
      }

      for (int j = zeros.size() - 1; j >= 0; j--) {
        cout << zeros[j] << " ";
      }
      cout << endl;
    }
  }
}
