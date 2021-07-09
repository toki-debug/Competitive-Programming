//Arissa Yoshida
//A. Perfect Permutation - https://codeforces.com/contest/233/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{  
   
  int n;
  cin >> n ;
  if(n%2!=0){
    cout << -1 << endl;
  }else{
    int a=2,b=1;
  for(int i=1;i<=n;i++){
    if(i%2!=0){
      cout << a <<" ";
       a+=2;
    }else{
       cout << b <<" ";
        b+=2;
    }
  }
  cout << endl;
  }
}
