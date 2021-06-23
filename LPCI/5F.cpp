//Arissa Yoshida 05/2021
//https://www.spoj.com/problems/RMID2/
#include <bits/stdc++.h>
using namespace std;
#define MAXN 1001

int main(){
 
  int a,t;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
  priority_queue<int> maxheap;
  priority_queue<int,vector<int>,greater<int> > minheap;
 while(1){
   
   scanf("%d",&a);

  if(a==0){
     break;
  }else if(a==-1){
    printf("%d\n",maxheap.top());
    maxheap.pop();

   if(maxheap.size()<minheap.size()){
        int b;
        b = minheap.top();
        minheap.pop();
        maxheap.push(b);

      }
  }else{
    if(maxheap.empty() && minheap.empty()){
      maxheap.push(a);
    }else{
      if(maxheap.top()<=a){
        minheap.push(a);
      }else{
        maxheap.push(a);
      }
      if(maxheap.size()<minheap.size()){
        int b;
        b = minheap.top();
        minheap.pop();
        maxheap.push(b);
     
      }else if(maxheap.size()>minheap.size()+1){
        int b;
        b = maxheap.top();
        maxheap.pop();
        minheap.push(b);
    }

    }
  }
 }
  }
    return 0;
}
