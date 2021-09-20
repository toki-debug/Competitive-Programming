//Arissa Yoshida
//C. Sweets Eating - https://codeforces.com/contest/1253/problem/C

#include <bits/stdc++.h>
#define MAXN 10000000

using namespace std;
typedef long long ll;
ll MOD = 1000000007;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll m,n;
  cin >> n >> m;
  vector<int>v(n,0);
  vector<ll>v2(n+1,0);
 for(ll i=0;i<n;i++){
   cin >> v[i];
   v2[i+1]+= v[i];
 }
 sort(v.begin(),v.end());
 for(ll i=1;i<=n;i++){
   v2[i] =v2[i-1]+v[i-1];
 }
  ll sum =0;
  vector<ll>total(n+1,0);
  
  ll d =0;
  for(ll k=0;k<m;k++){
   total[k] = v2[k+1];
 }
 for(ll k=m;k<n;k++){
   total[k]+=(total[k-m])+v2[k+1];
 }
 
 

 for(ll i=0;i<n;i++){
   cout << total[i] << " ";
 }cout << endl;

  return 0;
}
