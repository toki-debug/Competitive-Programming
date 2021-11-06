//Arissa Yoshida
//B. Candies Division - https://codeforces.com/contest/1283/problem/B

#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);

#define endl '\n'

typedef long long ll;

int main() {
  no_tle_pls
  int t;
  cin >> t;
  while(t--){
    int n,k;
    cin >> n >> k;
    int d = n/k;
    int r =n%k;
    if(r>=(k/2)){
      cout << n-(r- k/2) << endl;
    }else{
      cout << n << endl;
    }
    
  }

  return 0;
}
