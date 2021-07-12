//Arissa Yoshida
//A. Even Odds - https://codeforces.com/contest/318/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int n,k;
  cin >> n >> k;
  long long int im=n/2,pa=n/2;
  if(n%2!=0){
    im++;
  }
  if(k>im){
    k-=im;
    cout << (k*2) << endl;
  }else{
    cout << (k*2)-1 << endl;
  }
  return 0;
}

