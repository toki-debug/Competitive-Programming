//Arissa Yoshida
//C. Friends and Gifts - https://codeforces.com/contest/1283/problem/C

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
  vector<int> v(n);
  deque<int> resto;
  deque<int> :: iterator itr;
  vector<int>pos;
  vector<int> val(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] != 0) {
      
      val[v[i]] = 1;
    }else{
      pos.push_back(i+1);
    }
  }
  sort(pos.begin(),pos.end());
  for (int i = 1; i <= n; i++) {
    if (val[i] != 1 ) {
      if(binary_search(pos.begin(),pos.end(),i)){
        resto.push_front(i);
      }else{
        resto.push_back(i);
      }
      
    }
  }
  int j = 0;

  for (int i = 0; i < n; i++) {
    if (v[i] == 0) {
      for(itr = resto.begin();itr!=resto.end();++itr){
        if(*itr!=i+1){
          cout << *itr <<" ";
          resto.erase(itr);
          break;
        }
      }

    } else {
      cout << v[i] << " ";
    }
  }
  cout << endl;

  return 0;
}
