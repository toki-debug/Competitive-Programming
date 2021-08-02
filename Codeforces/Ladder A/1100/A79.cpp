//Arissa Yoshida
//A. Yaroslav and Permutations - https://codeforces.com/contest/296/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   int a,c,d=0,f=0;
    map<int,int>m;
    map<int,int>::iterator itr;
   for(int i=0;i<n;i++){
       cin >>a;
        if(m.find(a)==m.end()){
            m[a]=1;
        }else{
            m[a]++;
        }
   }
    
   for(itr=m.begin();itr!=m.end();++itr){
        a = itr->second;
        if((n-a)>=(a-1)){
            continue;
        }  else{
            f =1;
        } 
   }
   if(f){
       cout <<"NO" << endl;
   }else{
       cout <<  "YES" << endl;
   }
    

    return 0;
}
