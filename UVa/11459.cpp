//Arissa Yoshida
//11459 - Snakes and Ladders - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2454
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;

int main() {
  /*ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);*/
  int n;
  cin >> n;
  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v(101, 0);
    vector<int> player(a, 1);
    for (int i = 0; i < b; i++) {
      int val1, val2;
      cin >> val1 >> val2;
      if (val1 > val2) {
        v[val1] = -abs(val1 - val2);
      } else {
        v[val1] = abs(val1 - val2);
      }
    }
    int die = 0;
    int f = 1;

    for (int i = 0; i < c; i++) {
      cin >> die;
      if (a != 0 && f) {
        if (player[i % a] >= 100) {
          f = 0;
          player[i % a] = 100;
        } else if (player[i % a] <= 0) {
          player[i % a] = 1;
        }
        player[i % a] += die;

        player[i % a] += v[player[i % a]];
        if (player[i % a] >= 100) {
          f = 0;
        }
      }
    }

    for (int i = 0; i < a; i++) {
      if (player[i] > 100) {
        player[i] = 100;
      } else if (player[i] <= 0) {
        player[i] = 1;
      }
      cout << "Position of player " << i + 1 << " is " << player[i] << "."
           << endl;
    }
  }

  return 0;
}
