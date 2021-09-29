//Arissa Yoshida
//Projects - https://cses.fi/problemset/task/1140

#include <bits/stdc++.h>
using namespace std;
 
#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;
 
#define mod 1000000007
 
int main() {
  no_tle_pls ll n;
  cin >> n;
  map<ll, ll> mp;
  map<ll, ll>::iterator itr;
  vector<pair<pair<int, int>, int>> v(n);
  ll maximo = 0;
   for (ll i = 0; i < n; i++) {
    cin >> v[i].first.second >> v[i].first.first >> v[i].second;
   }
  sort(v.begin(),v.end());
  ll last =0;
  for (ll i = 0; i < n; i++) {
    int ini = v[i].first.second;
    int fim = v[i].first.first;
    itr = mp.lower_bound(ini);
    ll cur =0;
    if (itr != mp.begin()) {
      itr--;
      cur = itr->second;
    }
    ll new_value = max(last,cur+v[i].second);
    mp[fim] = max(mp[fim], new_value);
      maximo = max(maximo, mp[fim]);
      last = mp[fim];
  }
  cout << maximo << endl;
  return 0;
}
