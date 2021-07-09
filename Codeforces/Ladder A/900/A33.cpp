//Arissa Yoshida
//A. Marks - https://codeforces.com/contest/152/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  int valor_maximo[m+1]={0};
  int vet[n+1][m+1];
  string s;

  for(int i=0;i<n;i++){
    cin >> s;
    for(int j=0;j<m;j++){
      vet[i][j] = s[j]-48;
      valor_maximo[j] = max(vet[i][j],valor_maximo[j]);
    }
  }
  int students =0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(vet[i][j]==valor_maximo[j]){
        students++;
        break;
      }
    }
  }
  cout << students << endl;
  return 0;
}

