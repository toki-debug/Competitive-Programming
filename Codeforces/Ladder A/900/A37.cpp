//Arissa Yoshida
//A. Lunch Rush - https://codeforces.com/contest/276/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  int a,b;
  int maior=0;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    if(b>k){
      a = a-(b-k);
    }
    if(i==0){
      maior = a;
    }else{
      maior = max(maior,a);
    }
  }
  cout << maior << endl;
  return 0;
}

