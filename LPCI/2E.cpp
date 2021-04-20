//Arissa Yoshida 04/2021
//https://www.spoj.com/problems/STACKEZ/

#include <bits/stdc++.h>
using namespace std;


int main()
{
 long int t;
 cin >> t;
 int w;
 long long int a;
 stack<long long int>x;
 for(int i=0;i<t;i++){
   scanf("%d",&w);
   if(w==1){
     scanf("%lld",&a);
     x.push(a);
   }else if(w==2){
     if(!x.empty()){
     x.pop();
     }
   }else if(w==3){
     if(x.empty()){
       printf("Empty!\n");
     }else{
      printf("%lld\n",x.top());
     }
     
   }

 }
    
    return 0;
}
