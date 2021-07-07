//Arissa Yoshida
//A. Elephant - https://codeforces.com/contest/617/problem/A

#include <bits/stdc++.h>
using namespace std;
 
#define MAXN 79888
 
int main(){
  int n;
  cin >>n;
  int sum;
    sum = floor(n/5);
    if(sum*5<n){
        sum+=1;
    }
    cout << sum << endl;
  return 0;
}
