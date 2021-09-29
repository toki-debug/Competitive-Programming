//Arissa Yoshida
//Elevator Rides - https://cses.fi/problemset/task/1653

#include <bits/stdc++.h>
using namespace std;
 
#define fast_io                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;
 
#define mod 1000000007
 
int main() {
  // fast_io
  ll n, x;
  cin >> n >> x;
  vector<int> weight(n, 0);
 pair<int,int> best[1<<n];
  for (ll i = 0; i < n; i++) {
    cin >> weight[i];
  }
  int r = 0;
 
  for (int s = 1; s < (1 << n); s++) {
    // initial value: n+1 rides are needed
    best[s] = {n + 1, 0};
    for (int p = 0; p < n; p++) {
      if (s & (1 << p)) {
        auto option = best[s ^ (1 << p)];
        if (option.second + weight[p] <= x) {
          // add p to an existing ride
          option.second += weight[p];
        } else {
          // reserve a new ride for p
          option.first++;
          option.second = weight[p];
        }
        best[s] = min(best[s], option);
      }
    }
  }
 
  cout << best[(1<<n)-1].first+1 << endl;
  return 0;
}
