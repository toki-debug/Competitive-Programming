//Arissa Yoshida 04/2021
//https://vjudge.net/problem/AtCoder-agc004_c

#include <bits/stdc++.h>
using namespace std;


int main()
{
  int a,b;
  cin >> a >>b;
  int a1[a+1][b+1];
  int b1[a+1][b+1];
  char s;
  
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      a1[i][j]=0;
      b1[i][j]=0;
    }}
  for(int i=0;i<b;i++){
    a1[0][i] = 1;
    b1[a-1][i] = 1;
  
  }
  //formando uma grade imparxpar
  for(int i=1;i<a-1;i++){
    for(int j=0;j<b;j++){
      
      if(j%2==1){
        a1[i][j]=1;
         
      }else{
        b1[i][j]=1;
         
      }
    }
  }


  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      cin >> s;
      if(s=='#'){
        a1[i][j] =1;
        b1[i][j]=1;
      }
    }
  }
  
    for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
         
           if(a1[i][j]==1){
             cout << "#";
           }else{
             cout << ".";
           }
         
       }
       cout << endl;
    }

    cout << endl;

  for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
         
           if(b1[i][j]==1){
             cout << "#";
           }else{
             cout << ".";
           }
         
       }
       cout << endl;
    }
    
    return 0;
}
