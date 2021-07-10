//Arissa Yoshida
//A. Exams - https://codeforces.com/contest/194/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  if(n*3<=k){
    cout << 0 << endl;
  }else{
    cout << (n*3)-k << endl;
  }
  return 0;
}

