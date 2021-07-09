//Arissa Yoshida
//A. Anton and Letters - https://codeforces.com/contest/443/problem/A
#include <bits/stdc++.h>
using namespace std;

#define MAXN 79888

int main(){
   string a;
   vector<int>alfa(27,0);
   
   getline(cin,a);
   for(int i=0;i<a.size();i++){
       if(a[i]>='a' && a[i]<='z'){
           alfa[a[i]-'a'] = 1;
           
       }
   }
   int sum=0;
   
   for(int i=0;i<27;i++){
       if(alfa[i]==1){
           sum++;
       }
   }
   cout << sum  << endl;
  return 0;
}
