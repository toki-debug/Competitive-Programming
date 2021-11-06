//Arissa Yoshida
//D. Christmas Trees - https://codeforces.com/contest/1283/problem/D

#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);

#define endl '\n'

typedef long long ll;

int main() {
  no_tle_pls ll n, m;
  cin >> n >> m;
  ll dist = 1;
  vector<ll> pos(n);
  // vector<pair<ll,ll>>pos2;
  map<ll, pair<ll, ll>> pos2;
  map<ll, pair<ll, ll>>::iterator itr;
  map<ll, pair<ll, ll>>::iterator itr2;
  map<ll, ll> x;
  for (ll i = 0; i < n; i++) {
    cin >> pos[i];
    pos2[pos[i]] = (make_pair(pos[i], pos[i]));
    x[pos[i]] = 1;
  }
  // first = minimo
  // second = maximo
  sort(pos.begin(), pos.end());
  vector<ll> p;
  while (m > 0) {

    for (itr = pos2.begin(); itr != pos2.end(); ++itr) {
      if (x[itr->second.first - 1] == 0) {
        x[itr->second.first - 1] = 1;
        p.push_back(itr->second.first - 1);
        itr->second.first -= 1;
        m--;
        if (m == 0) {
          break;
        }
      } else {
        itr2 = --itr;
        ++itr;
        (itr)->second.first = (itr2)->second.first;
        pos2.erase(itr2);
      }

      if (x[itr->second.second + 1] == 0) {
        x[itr->second.second + 1] = 1;
        p.push_back(itr->second.second + 1);
        itr->second.second += 1;
        m--;
        if (m == 0) {
          break;
        }
      }
    }
  }
  sort(p.begin(), p.end());

  ll j = 0;
  ll sum = 0;
  ll posicao;
  for (ll i = 0; i < p.size(); i++) {
    posicao = lower_bound(pos.begin(),pos.end(),p[i]) - pos.begin();
    if(posicao==0){
      sum+=abs(pos[posicao]-p[i]);
    }
    else if(posicao ==pos.size()){
        posicao --;
        sum+=abs(pos[posicao]-p[i]);
    }else{
      sum+=min(abs(pos[posicao-1]-p[i]),abs(pos[posicao]-p[i]));
    }
    
    
  }
  cout << sum << endl;
  for (ll i = 0; i < p.size(); i++) {
    cout << p[i] << " ";
  }
  cout << endl;

  return 0;
}
