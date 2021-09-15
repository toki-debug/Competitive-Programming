//Arissa Yoshida
//Chef and Queries - https://www.codechef.com/problems/CHEFQUE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll MOD = 1LL << 32LL;
const ll maxn = MOD/2LL + 1LL;
vector<bool>ver(maxn,false);

int main() {
  ll q, s1,a,b;
  cin >> q >> s1 >> a >> b;

  ll sum=0;
  for(ll i=1;i<=q;i++){

    if(s1%2==0){
     
        if(ver[s1/2]){
          sum-=s1/2;
        }
        ver[s1/2] =false;
      }else{
        if(!ver[s1/2]){
          
          sum+=s1/2;
        }
        ver[s1/2] =true;
      }
    

    s1 = (a*s1+b)%MOD;
    
  }
 
  cout << sum << endl;

  return 0;
}
