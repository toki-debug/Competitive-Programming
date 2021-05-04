//Arissa Yoshida 05/2021
//https://www.spoj.com/problems/BTCK/en/

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1001

int main(){
 int a;
 cin >> a;
 int r =0;
 int vet[11];
 int compar[11];

 
 for(int i=0;i<a;i++){
   for(int i=0;i<10;i++){
     compar[i]=i;
   }
   for(int j=0;j<10;j++){
     cin >> vet[j];
   }

   cin >> r;
  // int final[11];
       
   int c=0;
    do {
       int sum =0;
    
     for(int k=0;k<10;k++){
       sum+= (vet[k]) * compar[k];
       
     }
    
     if(sum<=r){
       for(int k=0;k<10;k++){
         cout << compar[k] << " ";
        }
        cout << endl;
        c=1;
       break;
       
     }
  } while ( next_permutation(compar,compar+10) );
  if(c==0){
    printf("-1\n");
  }
 }

    
} 
