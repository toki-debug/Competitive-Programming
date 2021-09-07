//Arissa Yoshida
//B. Numbers on the Chessboard - https://codeforces.com/contest/1027/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 100005
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n,q;
  cin >> n >> q;
  ll x,y;
  ll r ;
  for(ll i=0;i<q;i++){
    cin >> x >> y;
      ll c = (x-1)*n+y; 

    if((x+y)%2!=0){
      r = (c+1)/2+(n*n+1)/2;
    }else{
      r = (c+1)/2;
    } 
     cout << r << endl;

  }

  
}
