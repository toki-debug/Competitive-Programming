//Arissa Yoshida 04/2021
//https://vjudge.net/problem/UVA-10954

#include <bits/stdc++.h>
using namespace std;


int main(){
  
    int x;
    
    int k;
    while(cin >> x){
      if(x==0){
        break;
      }else{
        priority_queue<int>a;
        for(int i=0;i<x;i++){
          cin >> k;
          a.push((k*(-1)));
        }
        int sum=0; int t;
        for(int i=0;i<x-1;i++){
          t = abs(a.top());
          //cout << a.top() << " ";
          a.pop();
          t+=abs(a.top());
          
          //cout << a.top() << " = " << t <<endl ;
          a.pop();
          sum+=t;
          t*=-1;
          a.push(t);
        }
        cout << sum << endl;
    }
    }
    return 0;
}

