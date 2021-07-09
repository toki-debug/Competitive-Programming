//Arissa Yoshida
//A. Greg's Workout - https://codeforces.com/contest/255/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{  
  int n;
  cin >> n;
  int a=0,b=0,c=0;
  int d;
  for(int i=1;i<=n;i++){
    cin >> d;
    if(i%3==0){
      c+=d;
    }else if((i+1)%3==0){
      b+=d;
    }else{
      a+=d;
    }
  }
  
  d = max(max(a,b),c);
  if(d==a){
    cout << "chest" << endl;
  }else if(d==b){
    cout << "biceps" << endl;
  }else{
     cout << "back" << endl;
  }
 
  
 
return 0;
}
