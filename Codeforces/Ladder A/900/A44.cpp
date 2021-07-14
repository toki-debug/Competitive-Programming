//Arissa Yoshida
//A. Devu, the Singer and Churu, the Joker - https://codeforces.com/contest/439/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,d;
  cin >> n >> d;
  int a,b=0,c=0;
  for(int i=0;i<n;i++){
    cin >> a;
    b+=a;
  }
  c= b+(10*(n-1));
  if(c>d){
    cout << -1 << endl;
  }else{
    c+=(d-c);
    c-=b;
    cout << c/5 << endl;
  }
  
  return 0;
}

