//Arissa Yoshida
//A. Maximum Distance - https://codeforces.com/gym/102951/problem/A

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
  setIO("");
  ll n;
  cin >> n;
  vector<ll> pos[n];
  for (int i = 0; i < n; i++) {
    ll a;
    cin >> a;
    pos[i].push_back(a);
  }
  for (int i = 0; i < n; i++) {
    ll a;
    cin >> a;
    pos[i].push_back(a);
  }
  ll dist = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      dist = max(dist,
                 ((abs(pos[i][1] - pos[j][1]) * abs(pos[i][1] - pos[j][1])) +
                  (abs(pos[i][0] - pos[j][0]) * abs(pos[i][0] - pos[j][0]))));
    }
  }
  cout << dist << endl;
}
