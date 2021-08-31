//Arissa Yoshida
//B. Japanese Crosswords Strike Back - https://codeforces.com/contest/884/problem/B

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n,x;
  cin >> n >> x;
  ll a;
  ll sum=0; 
  for(int i=0;i<n;i++){
    cin >> a;
    sum+=a;
  }
  if(sum==x-(n-1)){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

  return 0;
}
