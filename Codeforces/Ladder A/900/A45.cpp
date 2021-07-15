//Arissa Yoshida
//A. Game With Sticks - https://codeforces.com/contest/451/problem/A

#include <bits/stdc++.h>
using namespace std;
#define MAXN 100

int main(){
  int n,m;
  cin >> n >> m;
  int minimo = min(n,m);
  if(minimo%2==0){
    cout << "Malvika" << endl;
  }else{
    cout << "Akshat" << endl;
  }
  
  return 0;
}

