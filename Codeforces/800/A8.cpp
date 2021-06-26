//Arissa Yoshida
//A. Arrival of the General - https://codeforces.com/contest/144/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{  
   int n;
   cin >> n;
   int a;
   vector<int>v;
   for(int i=0;i<n;i++){
     cin >> a;
     v.push_back(a);
   }
   int b;
   int r=0;
  int j,k;
  int l=0;
  int h=0;
   a = *min_element(v.begin(),v.end());
   b = *max_element(v.begin(),v.end());
  
   for(int i=0;i<n;i++){
     if(v[i]==b && h==0){
       j = i;
       h++;
     }
     if(v[i]==a){
      k = (n-i-1);
      l = i;
     }
   }
   if(j>l){
     j-=1;
   }
   r = j+k;
   cout << r << endl;
 
 
  return 0;
}
