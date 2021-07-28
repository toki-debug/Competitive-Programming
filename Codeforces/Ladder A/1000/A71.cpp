//Arissa Yoshida
//A. Expression - https://codeforces.com/contest/479/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
   int a,b,c;
   cin >> a >> b >> c;

   int sum=0;
   sum = max(sum,(a+b)*c);
   sum = max(sum,(a+b)+c);
   sum = max(sum,(a*b)+c);
   sum = max(sum,(a*b)*c);
   sum = max(sum,a+(b*c));
   sum = max(sum,a*(b+c));

   cout << sum << endl;
   
    return 0;
}
