//Arissa Yoshida
//A. I Wanna Be the Guy - https://codeforces.com/contest/469/problem/A

#include <bits/stdc++.h>
using namespace std;

#define MAXN 79888

int main(){
   int n;
   cin >> n;
   int a;
   vector<int>vet(n+1,0);
   while(cin>>a){
       vet[a]=1;
   }
   a=0;
   for(int i=1;i<=n;i++){
       if(vet[i]==0){
           a =1;
           break;
       }
   }
   if(a==0){
       cout << "I become the guy." << endl;
   }else{
       cout << "Oh, my keyboard!" << endl;
   }
  return 0;
}
