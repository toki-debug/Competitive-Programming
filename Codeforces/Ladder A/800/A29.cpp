//Arissa Yoshida
//A. Vanya and Fence - https://codeforces.com/contest/677/problem/A

#include <bits/stdc++.h>
using namespace std;
 
#define MAXN 79888
 
int main(){
  int n,h;
  cin >> n >> h;
  int a =0;
  int r=0;
  while(n--){
    cin >> a;
    if(a>h){
      r+=2;
    }else{
      r++;
    }
  }
  cout << r << endl;
  return 0;
}
