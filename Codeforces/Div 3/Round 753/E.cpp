//Arissa Yoshida
//E. Robot on the Board 1 - https://codeforces.com/contest/1607/problem/E

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
  } else if (a.second == b.second) {
    if (a.first < b.first) {
      return true;
    }
  }
  return false;
}

int main() {
  no_tle_pls int t;
  cin >> t;

  while (t--) {
    int n, m;
    string s;
    int de = 0, cb = 0;
    cin >> n >> m;
    cin >> s;
    int maxde = 0, minde = INT_MAX, maxcb = 0, mincb = INT_MAX;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'R') {
        de--;
        if (abs(max(maxde, de) - min(minde, de))>=m || abs(min(mincb, cb) - max(maxcb, cb)) >= n) {
        de++;
        break;}
      
      } else if (s[i] == 'L') {
        de++;
        if (abs(max(maxde, de) - min(minde, de))>=m || abs(min(mincb, cb) - max(maxcb, cb)) >= n) {
        de--;
        break;}
      } else if (s[i] == 'D') {
        cb--;
        if (abs(max(maxde, de) - min(minde, de))>=m || abs(min(mincb, cb) - max(maxcb, cb)) >= n) {
        cb++;
        break;}
      } else {
        cb++;
        if (abs(max(maxde, de) - min(minde, de))>=m || abs(min(mincb, cb) - max(maxcb, cb)) >= n) {
        cb--;
        break;}
      }
      
        maxde = max(maxde, de);
        minde = min(minde, de);
        maxcb = max(maxcb, cb);
        mincb = min(mincb, cb);
      
    }
    maxcb = max(maxcb+1,1);
    maxde = max(maxde+1,1);
    if(maxcb>n){
      maxcb--;
    }
    if(maxde>m){
      maxde--;
    }
    cout << maxcb <<" "<< maxde << endl;
  }

  return 0;
}

