//Arissa Yoshida
//A. Function Height - https://codeforces.com/contest/1036/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 100005
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n,k;
  cin >> n >> k;
  if(k%n!=0){
      k+= n- (k%n);
  }
  cout << (k/n) << endl;
}
