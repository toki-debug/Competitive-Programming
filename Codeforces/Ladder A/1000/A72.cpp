//Arissa Yoshida
//A. Watching a movie - https://codeforces.com/contest/499/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,x;
   cin >> n >> x;
   int l,r,sum =0,l1=1;
   for(int i=0;i<n;i++){
       cin >> l >> r;
       sum+=(r-l+1);
       sum+=((l-l1)%x);
        l1 = r+1;

   }
   cout << sum << endl;
   
    return 0;
}
