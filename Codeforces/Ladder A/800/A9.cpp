//Arissa Yoshida
//A. Soft Drinking - https://codeforces.com/contest/151/problem/A
#include <bits/stdc++.h>
using namespace std;
 
int main()
{  
   int n,k,l,c,d,p,nl,np;
   cin >> n >> k >> l >> c >> d >> p >> nl >> np;
   int b=0;
   int limes;
   b = k*l;
   limes = c*d;
   int cont =0;
   b= floor(b/nl);
   p = floor(p/np);
   
   cont = min(min(b,p),limes);
  
   cont = floor(cont/n);
   cout << cont << endl;
 
  return 0;
}
