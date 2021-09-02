// Arissa Yoshida
//10443 - Rock, Scissors, Paper - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1384&mosmsg=Submission+received+with+ID+26736111

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;

int main() {
  /*ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);*/
  int t;
  cin >> t;
  while(t--){
    int a,b,c;
    cin >> a >> b >> c;
    string war;
    map<char,char>ver;
    ver['S'] = 'P';
    ver['R'] = 'S';
    ver['P'] = 'R';
    char ant[a+1][b+1];
    char dep[a+1][b+1];
    for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
        cin >> ant[i][j];
        dep[i][j]=ant[i][j];
      }
    }
    while(c--){

    for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
        //direita
        char d = ant[i][j];
        if(j+1<b){
          if(ant[i][j+1]==ver[d]){
            dep[i][j+1] = d;
          }
        }
        //esquerda
        if(j-1>=0){
          if(ant[i][j-1]==ver[d]){
            dep[i][j-1] = d;
          }

        }
        //baixo
        if(i+1<a){
          if(ant[i+1][j]==ver[d]){
            dep[i+1][j] = d;
          }

        }
        //cima
        if(i-1>=0){
          if(ant[i-1][j]==ver[d]){
            dep[i-1][j] = d;
          }
        }

      }
    }

    for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
        ant[i][j] = dep[i][j]; 
      }
    }

  }
  for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
        cout << dep[i][j]; 
      }
      cout << endl;
    }
    if(t!=0){
      cout << endl;
    }
  }
  return 0;
}
