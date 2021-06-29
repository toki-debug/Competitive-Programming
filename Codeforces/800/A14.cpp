//Arissa Yoshida
//A. Colorful Stones (Simplified Edition) - https://codeforces.com/problemset/problem/265/A
#include <bits/stdc++.h>
using namespace std;
 
int main()
{  
 string a,b;
 cin>> a >> b;
 int k=0;
 for(int i=0;i<b.size();i++){
   if(b[i]==a[k]){
     k++;
   }
 }
 cout << k+1 << endl;
 
  
return 0;
}
