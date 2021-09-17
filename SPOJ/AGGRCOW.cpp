//Arissa Yoshida
//AGGRCOW - Aggressive cows - https://www.spoj.com/problems/AGGRCOW/

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
  ll t,n,c;
  cin >>t;
  while(t--){
    cin >> n >> c;
    vector<int>v(n,0);
    for(ll i=0;i<n;i++){
      cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll sum=0;
    ll pos;
    ll op=0;
    ll val;
    ll fim = v[n-1], ini = v[0];
    ll r=0;
    while(ini<=fim){
      sum=1;
      ll i=0;
      pos = 0;
      val=(fim+ini)/2;
      while(pos<n){
      pos = lower_bound(v.begin(),v.end(),v[pos]+val) - v.begin();
       if(pos<n){
        sum++;
        }
      }
      
      
        if(sum>=c){
        ini = val+1;
        r = val;
      }else{
        fim = val -1;
      }
    
     
     
    }
    cout << r << endl;
  }
  

return 0;
}
