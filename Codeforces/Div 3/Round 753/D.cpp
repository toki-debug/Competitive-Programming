//Arissa Yoshida
//D. Blue-Red Permutation - https://codeforces.com/contest/1607/problem/D

#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);

#define endl '\n'

typedef long long ll;

bool cmp(pair<ll, char> a, pair<ll, char> b) {
  if (a.second == 'B' && b.second == 'R') {
    return true;
  } else if(a.second == b.second){
    if (a.first < b.first) {
      return true;
    }
  }
  return false;
}

int main() {
  no_tle_pls int t;
  cin >> t;

  ll x, n;

  while (t--) {
    cin >> n;
    vector<pair<ll, char>> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i].first;
    }

    for (int i = 0; i < n; i++) {
      cin >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int f = 1;
    for (int i = 0; i < v.size(); i++) {
      if ((v[i].first > i + 1 && v[i].second == 'R') ||
          (v[i].first < i + 1 && v[i].second == 'B')) {
        f = 0;
        break;
      }
    }
    if (f) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
