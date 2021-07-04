//Arissa Yoshida
//A. Choosing Teams - https://codeforces.com/contest/432/problem/A

#include <bits/stdc++.h>
using namespace std;

#define MAXN 79888

int main(){
   int n,k;
   cin >> n >> k;
   int a;
int sum =0;
   for(int i=0;i<n;i++){
       cin >> a;
       if(a+k<=5){
           sum++;
       }
   }
   cout << sum /3 << endl;
  return 0;
}
