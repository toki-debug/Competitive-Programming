//Arissa Yoshida
//A. Minimum Difficulty - https://codeforces.com/contest/496/problem/A

#include <bits/stdc++.h>
using namespace std;
#define MAXN 100

int main(){
  int n,m;
  cin >> n;
  int vet[n+1];
  for(int i=0;i<n;i++){
    cin >> vet[i];
  }
  
  int menor = 99999;
  for(int i=1;i<n-1;i++){
    int maior =0;
        for(int j=1;j<n-1;j++){
          if(i==j){
             maior = max(maior,vet[j+1]-vet[j-1]);
          }else{
            maior = max(maior, vet[j+1]-vet[j]);
          }
        }
        menor = min(menor,maior);
  }
  cout << menor << endl;
  
  return 0;
}
