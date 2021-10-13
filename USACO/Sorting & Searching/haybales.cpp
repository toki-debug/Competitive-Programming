// Arissa Yoshida
// Problem 1. Counting Haybales -
// http://www.usaco.org/index.php?page=viewproblem2&cpid=666

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
  setIO("haybales");
  fast_io ll n, q;
  cin >> n >> q;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  ll a, b;
  ll pos1, pos2;
  while (q--) {
    cin >> a >> b;
    a = lower_bound(v.begin(), v.end(), a) - v.begin();
    b = upper_bound(v.begin(), v.end(), b) - v.begin();
    cout << b - a << endl;
  }

  return 0;
}
