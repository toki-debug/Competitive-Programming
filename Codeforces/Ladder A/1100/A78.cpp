//Arissa Yoshida
//A. Sockets - https://codeforces.com/contest/257/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,m,k;
   cin >> n >> m >> k;
   vector<int>v;
   int a;
   for(int i=0;i<n;i++){
       cin >> a;
       v.push_back(a);
   }
   sort(v.begin(),v.end());
   int num=v.size();
   int r =0;
   while(m>k && num>0){
       num--;
       if(k>0){
           k--;
           m -=v[num];
           r++;
       }else{
           break;
        }}
    if(m>k){
    if(v[num+1]>1){    
               m+=1;
           while(num>0 && m>0){
                 m-=v[num];
                 r++;
                 if(m>0 && v[num]>1){
                     m+=1;
                 }else{
                     break;
                 }
                  num--;              
           }
          
           }

           if(m>0){
               r = -1;
           }
    }       
       
   
   cout << r << endl;
    return 0;
}
