//Arissa Yoshida 05/2021
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=569


#include <bits/stdc++.h>
using namespace std;
#define MAXN 1001

string nome[MAXN];
string s1;
int num=0;
int vet[10];
char saida[MAXN];
void rec(int p){
  if(p == s1.size()){
    for(int i=0;i<s1.size();i++){
      if(saida[i]=='#'){
        cout << nome[num];
      }else{
        cout << saida[i];
      }
    }
     cout << endl;
   }else if(s1[p]=='#'){
    saida[p] ='#';
    rec(p+1);
    }else{
      for(int i=0;i<10;i++){
      saida[p] = i+'0';
      rec(p+1);
    }
    }

  
}
int main(){
  int n,m;
  string s;
  while(cin >> n){
    cout << "--" << endl;
  for(int i=0;i<n;i++){
    cin >> s;
    nome[i] = s;
  }
  cin >> m;
  for(int j=0;j<m;j++){
    cin >> s1;
      for(int k=0;k<n;k++){
        num =k;
        rec(0);
      }
  }
  }
  return 0;
    
} 
