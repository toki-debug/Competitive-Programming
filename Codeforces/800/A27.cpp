//Arissa Yoshida
//A. Fox And Snake - https://codeforces.com/contest/510/problem/A

#include <bits/stdc++.h>
using namespace std;
 
#define MAXN 79888
 
int main(){
  int n,m;
  cin >> n >> m;
  int f=1;
  for(int i=1;i<=n;i++){
      if(i%2==0){
          f++;
      }
      for(int j=1;j<=m;j++){
          if(i%2==0){
              
              if(f%2==0){
                  if(j==m){
                      cout << "#";
                  }else{
                      cout << ".";
                  }
              }else{
                  if(j==1){
                      cout << "#";
                  }else{
                      cout << ".";
                  }
              }
              
          }else{
              cout <<"#";
          }
      }
 
      cout << endl;
      
  }
 
  return 0;
}
