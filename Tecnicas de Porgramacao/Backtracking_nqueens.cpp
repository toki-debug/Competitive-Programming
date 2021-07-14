//Usando Backtracking para resolver o problema das n queens em um tabuleiro nxn

#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
int n;
int tab[MAXN][MAXN] ={0};

void show(){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout << tab[i][j] << " ";
    }
    cout << endl;
  }
}

bool verifica(int a,int b){
  for(int i=0;i<n;i++){
    if(tab[a][i]==1){
      return false;
    }
    
  }
  for(int i=0;i<n;i++){
   if(tab[i][b]==1){
     return false;
   }
  }
  int  i = a;
  for(int j=b;j<n;j++){
    if(tab[i][j]==1){
      return false;
    }
    i++;
  }
  i = a;
  for(int j=b;j>=0;j--){
    if(tab[i][j]==1){
      return false;
    }
    i--;
  }

  i = a;
  for(int j=b;j<n && i>=0;j++){
     if(tab[i][j]==1){
      return false;
    }
    i--;
  }
  i = a;
  for(int j=b;j>=0 && i<n;j--){
     if(tab[i][j]==1){
      return false;
    }
    i++;
  }
  
  return true;
}



int sum =0,r=0;
 
void _search(int k){
  if(k==n){
    k=0;
    show();
    cout << endl;
      r++;
    
    
  }
  
 int ver =0;
 for(int i=0;i<n;i++){
     if(!verifica(k,i)){
       continue;
     }
     tab[k][i] = 1;
     _search(k+1);
     tab[k][i] =0;
  }
  
}


int main(){
  cin >> n;
  _search(0);
  
  cout << r << endl;
  
  return 0;
}

