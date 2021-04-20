//Arissa Yoshida 04/2021
//https://www.spoj.com/problems/STPAR/


#include <bits/stdc++.h>
using namespace std;


int main()
{
  int x;
  while(cin >> x){
  
  if(x==0){
    break;
  }
  stack<int>a;
  vector<int>b;
  int num;
  int c=1;
  for(int i=0;i<x;i++){
    cin >> num;
    
    if(num==c){
      b.push_back(num);
      c++;
    }else{
      while(!(a.empty()) && a.top()==c){
        b.push_back(a.top());
        a.pop();
        c++;
      }
      a.push(num);
    }
  }
 while(!a.empty()){
   b.push_back(a.top());
   a.pop();
 }
 c=0;
 for(int i=0;i<x;i++){
   if(b[i]!=(i+1)){
     c=1;
     break;
   }
 }
  if(c==0){
    cout <<  "yes" << endl;
  }else{
    cout <<  "no" << endl;
  }
  }
    return 0;
}
