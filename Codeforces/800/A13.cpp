//Arissa Yoshida
//A. Beautiful Matrix - https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;
 
int main()
{  
  int a;
  int x,y;
  for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
      cin>> a;
      if(a==1){
        x = i;
        y = j;
      }
    }
  }
 
  x = abs(x-3);
  x+=abs(y-3);
  cout << x << endl;
  
return 0;
}
