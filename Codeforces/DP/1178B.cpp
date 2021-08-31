//Arissa Yoshida
//B. WOW Factor - https://codeforces.com/problemset/problem/1178/B

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000 
typedef long long int ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  cin >> s;
  vector<ll>vv;
  vv.push_back(0);
  ll v=0; 
  ll sum=0;
  for(ll i=0;i<s.size();i++){
    if(s[i]=='v'){
      v++;
      if(v>=2){
        sum++;
      }
    }else{
      v=0;
    }
    vv.push_back(sum);
  }
  sum=0;
  for(ll i=0;i<s.size();i++){
    if(s[i]=='o'){
      sum+=(vv[i+1]*(vv[vv.size()-1]-vv[i+1]));
    }
  }
  cout << sum << endl;
  
   
  return 0;
}
