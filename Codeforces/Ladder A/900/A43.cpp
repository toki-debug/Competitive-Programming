//Arissa Yoshida
//A. Line to Cashier - https://codeforces.com/contest/408/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int vet[n+1];
  int vet2[n+1];
  for(int i=0;i<n;i++){
    cin >> vet[i];
    vet2[i] = vet[i]*15;
  }
  int a,r=99999999;

  for(int i=0;i<n;i++){
    for(int j=0;j<vet[i];j++){
      cin >> a;
      vet2[i]+=(a*5);
    }
    r = min(r,vet2[i]);
  }
  cout << r << endl;
  
  return 0;
}

