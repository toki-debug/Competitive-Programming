//Arissa Yoshida
//B. Lara Croft and the New Game - https://codeforces.com/contest/976/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;
typedef vector<int> vec;
typedef vector<pa> vep;

int main() {
  ll n,m,k;
  cin >> n >> m >> k;
  
  if(k<n){
    cout << k+1 << " " << 1 << endl;
  }else if(k<=n+m-2){
    cout << n << " " << k-n+2 << endl;
  
  }else{
   
    ll pos;
    k-=n;
   pos = (k)/(m-1);
    cout << n-pos << " ";
    ll val = k%(m-1);
    
    if((n-pos)%2==0){
      
      cout << val+2;
      
    }else{
      
      cout << (m)-val;
    }
    
  }

  
}
