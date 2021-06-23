//Arissa Yoshida 05/2021
//https://www.spoj.com/problems/MINSTOCK/
#include <bits/stdc++.h>
using namespace std;
#define MAXN 1001

int main(){
 int n;
 cin  >> n;
  map<string,int>aqui;
  string b;
 int a,c;
  set<pair<int, string>>s;
 for(int i=0;i<n;i++){
   cin >> a >> b;
   if(a==1){
     cin >> c;
     aqui[b]=c; 
     s.insert(make_pair(aqui[b],b));
   }else if(a==2){
     cin >> c;
     s.erase(make_pair(aqui[b],b));
     aqui[b]=c; 
     s.insert(make_pair(aqui[b],b));
   }else{
     cout << (*s.begin()).second <<" "<<(i+1) << endl;
     s.erase(s.begin());
   }
   
 }
    return 0;
} 
