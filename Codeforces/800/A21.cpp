//Arissa Yoshida
//A. Soroban - https://codeforces.com/contest/363/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
  
  string num;
  cin >> num;
  
  for(int i=num.size()-1;i>=0;i--){
    int e=0,d=0;
    int n = num[i]-48;
    if(num[i]-48<5){
      cout << "O-|";
      
      d = 4-n;
      e =n;
 
    }else{
      cout << "-O|";
      e = n - 5;
      d = abs(4-e);
    }
 
    while(e--){
        cout << "O";
      }
      cout << "-";
    while(d--){
        cout << "O";
      }
    cout << endl;
      
  }
 
  return 0;
}

