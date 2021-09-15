//Arissa Yoshida
//Odd Topic - https://www.codechef.com/AABH2020/problems/ODTPIC

#include <bits/stdc++.h>
#define MAXN 100001
#define MAX 4001
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,q,c;
    cin >> n >> m >> q;
    
    bitset<MAX>a[n+1];
    bitset<MAX>b[m+1];

    for(ll i=1;i<=n;i++){
      cin >> c;
      a[i] = a[i-1];
      if(a[i][c]==1){
        a[i][c] =0;
      }else{
        a[i][c]=1;
      }
    }
    for(ll i=1;i<=m;i++){
      cin >> c;
      b[i] = b[i-1];
      if(b[i][c]==1){
        b[i][c] =0;
      }else{
        b[i][c]=1;
      }
    }
    ll l1,r1,l2,r2;
    while(q--){
      cin >> l1 >> r1 >> l2 >> r2;
      bitset<MAX>auxa,auxb,auxc;
      
      auxa = (a[l1-1]^a[r1]);
      auxb = (b[l2-1]^b[r2]);
      ll r =  (auxa ^ auxb).count();
      
      cout <<r << endl;
    }

  return 0;
}
