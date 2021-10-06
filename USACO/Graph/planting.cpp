//Arissa Yoshida
//Problem 1. Grass Planting - http://www.usaco.org/index.php?page=viewproblem2&cpid=894

#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;

#define mod 1000000007

int main() {
  no_tle_pls
  freopen("planting.in", "r", stdin);
  freopen("planting.out", "w", stdout);
  int n;
  cin >> n;
  int a, b;
  vector<int> v[n];
  for (int i = 1; i < n; i++) {
    cin >> a >> b;
    v[a - 1].push_back(b - 1);
    v[b - 1].push_back(a - 1);
  }
  int sum = 0;
  int r = 0;
  for (int i = 0; i < n; i++) {
    sum = v[i].size();
    r = max(r, sum + 1);
  }
  cout << r << endl;
  return 0;
}
