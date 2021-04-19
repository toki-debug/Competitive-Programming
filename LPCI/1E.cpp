//Arissa Yoshida 04/2021
//https://vjudge.net/problem/CodeForces-1220A

#include <bits/stdc++.h>
using namespace std;


int main()
{
  int x;
  cin >> x;
  char s;
  int a=0,b=0;
  for(int i=0;i<x;i++){
    cin >> s;
    if(s=='z'){
      a++;
    }else if(s=='n'){
      b++;
    }
  }
  for(int j=0;j<b;j++){
    if(j==0){
      cout << "1";
    }else{
      cout << " 1";
    }
  }
   for(int j=0;j<a;j++){
    if(j==0 && b==0){
      cout << "0";
    }else{
      cout << " 0";
    }
  }
  cout << endl;

    return 0;
}
