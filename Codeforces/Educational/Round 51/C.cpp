//Arissa Yoshida
//C. Vasya and Multisets - https://codeforces.com/contest/1051/problem/C

#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);

#define endl '\n'

typedef long long ll;

int main() {
  no_tle_pls int n;
  cin >> n;
  map<int, int> mp;
  map<int, int>::iterator itr;
  vector<int> todos(n);
  int num = -1;
  for (int i = 0; i < n; i++) {
    cin >> todos[i];
    mp[todos[i]]++;
    if(mp[todos[i]]>2){
      num = i;
    }
  }
  int t = 0;
  vector<int> v;
  
  for (itr = mp.begin(); itr != mp.end(); ++itr) {
    if (itr->second == 1) {
      mp[itr->first] = 0;
      v.push_back(itr->first);
      t++;
    }else if(itr->second ==2){
      v.push_back(itr->first);
    }
  }
  vector<int> r(n);
  if (t % 2 == 0 || (num != -1 && t != 0)) {
    cout << "YES" << endl;
    if (t % 2 != 0) {
      r[num] = 2;
    }
    sort(v.begin(), v.end());
    int a = 1;
    for (int i = 0; i < todos.size(); i++) {
      if (binary_search(v.begin(), v.end(), todos[i])) {
        if (mp[todos[i]] == 0) {
          if (a) {
            r[i] = 1;
            a = 0;
          } else {
            r[i] = 2;
            a = 1;
          }
        } else {
          if (mp[todos[i]] == 2) {
            r[i] = 2;
            mp[todos[i]]--;
          } else if (mp[todos[i]] == 1) {
            r[i] = 1;
          }
        }
      } else if(r[i]!=2) {
        r[i] = 1;
      }
    }
    for(int i=0;i<r.size();i++){
      if(r[i]==1){
        cout << "A";
      }else{
        cout << "B";
      }
    }
    cout << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
