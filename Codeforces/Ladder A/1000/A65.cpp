//Arissa Yoshida
//A. Bear and Raspberry - https://codeforces.com/contest/385/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n, c;
   cin >> n >> c;
   int vet[n+1];
   for(int i=0;i<n;i++){
       cin >> vet[i]; 
   }
   int maximo =0;
   for(int i=0;i<n-1;i++){
      maximo = max(vet[i] - vet[i+1],maximo);
   }
   maximo-=c;
   if(maximo <0){
       maximo =0;
   }
   cout << maximo << endl;

    return 0;
}
