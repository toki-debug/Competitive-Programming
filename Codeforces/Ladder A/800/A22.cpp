//Arissa Yoshida
//A. Playing with Dice - https://codeforces.com/contest/378/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int a,b,num1,num2;
  cin >> num1 >>num2;
  int w1=0,d=0,w2=0;
  for(int i=1;i<=6;i++){
    a = abs(i-num1);
    b = abs(i-num2);
    if(a>b){
      w2++;
    }else if(a<b){
      w1++;
    }else{
      d++;
    }
  }
  cout << w1 << " " << d << " " << w2 << endl;
 
  return 0;
}
