//Arissa Yoshida
//A. Presents - https://codeforces.com/contest/136/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{  
   int n;
   cin >> n;
   int vet[n+1];
   int a;
   for(int i=1;i<=n;i++){
     cin >> a;
     vet[a]=i;
   }
   for(int i=1;i<=n;i++){
     cout << vet[i] << " ";
   }
   cout << endl;
 
  return 0;
}
