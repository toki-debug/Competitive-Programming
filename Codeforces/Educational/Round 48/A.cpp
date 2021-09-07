//Arissa Yoshida
//A - Death Note - https://codeforces.com/contest/1016/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 100005
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n,m;
  cin >> n >> m;
  ll d =0;
  ll a;
  ll s=0;
  ll soma=0;
  for(ll i=0;i<n;i++){
    cin >> a;
    if(s!=0 && a<s){
      cout << 0 << " ";
      s = s-a;
    }else{
      d =a;
      d-=s;
      soma =0;
      if(s!=0){
        soma =1;
      }
      s = m - d%m;
      cout << d/m+soma << " ";
    }
    
    
    
  }
  cout << endl;

}
