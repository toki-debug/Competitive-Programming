//Arissa Yoshida
//A. Pashmak and Garden - https://codeforces.com/contest/459/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int x1,y1,x2,y2;
  int x3=0,y3=0,x4=0,y4=0;
  int dif=0;
  cin >> x1 >>y1 >> x2 >> y2;
  if(x1==x2){
      
      dif = abs(y1-y2);
      if(x1+dif>1000 || x2+dif >1000){
                  dif*=(-1);
        }
    x3 =x1+dif;
    x4 = x2+dif;
    y3 = y1;
    y4 = y2;

  }else if(y1==y2){
       dif = abs(x1-x2);
       if(y1+dif>1000 || y2+dif>1000){
                dif*=(-1);
        }
    y3 =y1+dif;
    y4 = y2+dif;
    x3 = x1;
    x4 = x2;

  }else{
      if(abs(x1-x2)==abs((y1-y2))){
          int difx = abs(x1-x2);
          int dify = abs(y1-y2);
          if(x1>x2 && y1>y2){
            y3 = y2+dify;
            x3 = x2;
            y4 = y2;
            x4 = x2+difx; 
          }else if(x1<x2 && y1 <y2){
            y3 = y1+dify;
            x3 = x1;
            y4 = y1;
            x4 = x1+difx; 
          }else if(x1>x2 && y1<y2){
            y3 = y1;
            x3 = x1-difx;
            y4 = y1+dify;
            x4 = x1; 
          }else{
            y3 = y2;
            x3 = x2-difx;
            y4 = y2+dify;
            x4 = x2;
          }
      }else{
          cout << -1 << endl;
          return 0;
      }
  }
  if(x3 >1000 || x3 <-1000 || y3 >1000 || y3 <-1000 || x4 >1000 || x4 <-1000 || y4 >1000 || y4 <-1000){
      cout << -1 << endl;
  }else{
      cout << x3 << " " << y3 <<  " " << x4 << " " << y4 << endl;
  }
  
    return 0;
}
