//Arissa Yoshida
//B. Beautiful Divisors - https://codeforces.com/contest/893/problem/B

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;
 



int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n;
  cin >> n;
  vector<ll>v2;
  vector<ll>v;
  ll a=1;
  while(a<INT_MAX){
    v2.push_back(a);
    a*=2;
  }
  a=1;
  while(v2[a]-1 *v2[a-1]<=(n/2)+1){
    v.push_back((v2[a]-1) *v2[a-1]);
  a++;
  }
  for(int i=v.size()-1;i>=0;i--){
    if(n%v[i]==0){
      cout << v[i] << endl;
      return 0;
    }
  }
  cout << 1 << endl;

  return 0;
}
