//Arissa Yoshida
//B. Balanced Substring - https://codeforces.com/contest/873/problem/B

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
 
  int n=0;
  int balance=0;
  cin >> n;
  char c;
  int k=0;
  int r=0;
  
  map<int,int>mp;
  mp[0] = -1;
  for(int i=0;i<n;i++){
    cin >> c;
    if(c=='1'){
      balance++;
    }else{
      balance--;
    }
   
    
    if(mp.count(balance)){
      r = max(r,i-mp[balance]);
    }else{
      mp[balance] = i;
    }
  }
  cout << r << endl;

  return 0;
}
