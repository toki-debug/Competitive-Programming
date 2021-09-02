// Arissa Yoshida
//B. Tea Queue - https://codeforces.com/contest/920/problem/B
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;

int main() {
  /*ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);*/
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> time(n, 0);
    int timer = 0;
    int l, r;
    int f = 0;
    for (int i = 0; i < n; i++) {
      cin >> l >> r;
      f = 0;
      if (i == 0) {
        timer += l;
        time[i] = timer;
        f = 1;
      } else {
        if (timer < l) {
          timer = l;
          time[i] = timer;
          f = 1;
        } else if (r >= timer) {
          time[i] = timer;
          f = 1;
        } else {
          time[i] = 0;
        }
      }
      if (f) {
        timer += 1;
      }
    }

    for (int i = 0; i < n; i++) {
      cout << time[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
