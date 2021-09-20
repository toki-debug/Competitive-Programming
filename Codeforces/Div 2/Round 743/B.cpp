//Arissa Yoshida
//B. Swaps - https://codeforces.com/contest/1573/problem/B
#include <bits/stdc++.h>
#define MAXN 10000000
#define MAX 4001
using namespace std;
typedef long long ll;
ll MOD = 1000000007;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {

      cin >> b[i] ;

      //mp[b[i]] = i;
    }
    for (int i = 1; i < n; i++) {

      b[i] = max(b[i-1],b[i]);

      //mp[b[i]] = i;
    }

    int r = 0;
    int minimo = INT_MAX;
   
 
    //sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
      r = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
      //r = mp[b[r]];
      r += i;
      minimo = min(r, minimo);
    }

    cout << minimo << endl;
  }

  return 0;
}
