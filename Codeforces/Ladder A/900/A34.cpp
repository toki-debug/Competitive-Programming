//Arissa Yoshida
//A. Twins - https://codeforces.com/contest/160/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int>moedas;
  int a;
  int sum=0;
  for(int i=0;i<n;i++){
    cin >> a;
    sum+=a;
    moedas.push_back(a);
  }
  sort(moedas.begin(),moedas.end());
  a=0;
  sum/=2;
  for(int i=n-1;i>=0;i--){
    a+=moedas[i];
    if(sum<a){
      cout << n-i << endl;
      break;
    }
  }
  return 0;
}

