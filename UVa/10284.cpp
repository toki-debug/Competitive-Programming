//Arissa Yoshida
//10284 - Chessboard in FEN - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1225

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000 
typedef long long int ll;
vector<vector<char>>chessboard(9,vector<char>(9,'0'));

void king(int a, int b){
  for(int i=a-1;i<=a+1;i++){
    for(int j=b-1;j<=b+1;j++){
      if(i>=8 || i<0 || j>=8 || j<0){
        continue;
      }
      if(chessboard[i][j]!='1' && chessboard[i][j]!='0'){
        continue;
      }
      chessboard[i][j] = '1';
    }
  }
}

void queen(int a, int b){
  //cima
  for(int j=a-1;j>=0;j--){
    if(chessboard[j][b]!='1' && chessboard[j][b]!='0'){
        break;
      }
      chessboard[j][b] = '1';
  }
  //baixo
  for(int j=a+1;j<8;j++){
    if(chessboard[j][b]!='1' && chessboard[j][b]!='0'){
        break;
      }
      chessboard[j][b] = '1';
  }


  //direito
   for(int i=b+1;i<8;i++){
    if(chessboard[a][i]!='1' && chessboard[a][i]!='0'){
        break;
      }
      chessboard[a][i] = '1';
  }

  //esquerdo
  for(int i=b-1;i>=0;i--){
    if(chessboard[a][i]!='1' && chessboard[a][i]!='0'){
        break;
      }
      chessboard[a][i] = '1';
  }


  //diagonal direita
  int k =b;
  for(int i=a+1;i<8 && k<8;i++){
    k++;
    if(chessboard[i][k]!='1' && chessboard[i][k]!='0'){
        break;
    }
      chessboard[i][k] = '1';
    
  }

  //diagonal esquerda
 k =b;
  for(int i=a-1;i>=0 && k>=0;i--){
     k--;
    if(chessboard[i][k]!='1' && chessboard[i][k]!='0'){
        break;
    }
      chessboard[i][k] = '1';
   
  }


  //diagonal2 direita
   k =b;
  for(int i=a-1;i>=0 && k<8;i--){
    k++;
    if(chessboard[i][k]!='1' && chessboard[i][k]!='0'){
        break;
    }
      chessboard[i][k] = '1';
    
  }

  //diagonal esquerda
  k =b;
  for(int i=a+1;i<8 && k>=0;i++){
    k--;
    if(chessboard[i][k]!='1' && chessboard[i][k]!='0'){
        break;
    }
      chessboard[i][k] = '1';
    
  }
  
  
}

void bishop(int a, int b){
  //diagonal direita
  int k =b;
  for(int i=a+1;i<8 && k<8;i++){
    k++;
    if(chessboard[i][k]!='1' && chessboard[i][k]!='0'){
        break;
    }
      chessboard[i][k] = '1';
    
  }

  //diagonal esquerda
 k =b;
  for(int i=a-1;i>=0 && k>=0;i--){
     k--;
    if(chessboard[i][k]!='1' && chessboard[i][k]!='0'){
        break;
    }
      chessboard[i][k] = '1';
   
  }


  //diagonal2 direita
   k =b;
  for(int i=a-1;i>=0 && k<8;i--){
    k++;
    if(chessboard[i][k]!='1' && chessboard[i][k]!='0'){
        break;
    }
      chessboard[i][k] = '1';
    
  }

  //diagonal esquerda
  k =b;
  for(int i=a+1;i<8 && k>=0;i++){
    k--;
    if(chessboard[i][k]!='1' && chessboard[i][k]!='0'){
        break;
    }
      chessboard[i][k] = '1';
    
  }
}

void knight(int a, int b){
  //1
  if(a-2>=0 && b-1>=0){
    if(chessboard[a-2][b-1]=='0'){
      chessboard[a-2][b-1] ='1';
    }
  }
  //2
  if(a-2>=0 && b+1<8){
    if(chessboard[a-2][b+1]=='0'){
      chessboard[a-2][b+1] ='1';
    }
    
  }
  //3
  if(a+2<8 && b+1<8){
    if(chessboard[a+2][b+1]=='0'){
      chessboard[a+2][b+1] ='1';
    }
  }
  //4
  if(a+2<8 && b-1>=0){
    if(chessboard[a+2][b-1]=='0'){
      chessboard[a+2][b-1] ='1';
    }
  }
  //1
  if(b-2>=0 && a-1>=0){
    if(chessboard[a-1][b-2]=='0'){
      chessboard[a-1][b-2] ='1';
    }
  }
  //2
  if(b-2>=0 && a+1<8){
    if(chessboard[a+1][b-2]=='0'){
      chessboard[a+1][b-2] ='1';
    }
  }
  //3
  if(b+2<8 && a+1<8){
    if(chessboard[a+1][b+2]=='0'){
      chessboard[a+1][b+2] ='1';
    }
  }
  //4
  if(b+2<8 && a-1>=0){
    if(chessboard[a-1][b+2]=='0'){
      chessboard[a-1][b+2] ='1';
    }
  }
}

void pawn(int a, int b){
  if(chessboard[a][b]=='P'){
    if(a-1>=0 && b+1<8){
      if(chessboard[a-1][b+1]=='0'){
        chessboard[a-1][b+1]='1';
      }
    }
    if(a-1>=0 && b-1>=0){
      if(chessboard[a-1][b-1]=='0'){
        chessboard[a-1][b-1]='1';
      }
    }
  }else{
    if(a+1<8 && b-1>=0){
      if(chessboard[a+1][b-1]=='0'){
        chessboard[a+1][b-1]='1';
      }
    }
    if(a+1<8 && b+1<8){
      if(chessboard[a+1][b+1]=='0'){
        chessboard[a+1][b+1]='1';
      }
    }

  }
  
}

void rook(int a, int b){
  //cima
  for(int j=a-1;j>=0;j--){
    if(chessboard[j][b]!='1' && chessboard[j][b]!='0'){
        break;
      }
      chessboard[j][b] = '1';
  }
  //baixo
  for(int j=a+1;j<8;j++){
    if(chessboard[j][b]!='1' && chessboard[j][b]!='0'){
        break;
      }
      chessboard[j][b] = '1';
  }


  //direito
   for(int i=b+1;i<8;i++){
    if(chessboard[a][i]!='1' && chessboard[a][i]!='0'){
        break;
      }
      chessboard[a][i] = '1';
  }

  //esquerdo
  for(int i=b-1;i>=0;i--){
    if(chessboard[a][i]!='1' && chessboard[a][i]!='0'){
        break;
      }
      chessboard[a][i] = '1';
  }
}

void print_chessboard(){
  int sum=0;
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(chessboard[i][j]=='0'){
        sum++;
      }
     // cout << chessboard[i][j] << " ";
    }
   // cout << endl;
  }
  cout << sum << endl;
}

int main() {
  /*ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);*/
  string s;
  while(getline(cin,s)){
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
        chessboard[i][j]='0';
      }
    }
    int r=0;
    int c=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='/'){
        c=0;
        r++;
      }else{
        if(s[i]>='0' && s[i]<='9'){
          c+=s[i]-'0';
        }else{
          chessboard[r][c] = s[i];
          c++;
        }
      }
    }
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
        if(chessboard[i][j]=='q' || chessboard[i][j]=='Q'){
          queen(i,j);
        }else if(chessboard[i][j]=='k' || chessboard[i][j]=='K'){
          king(i,j);
        }else if(chessboard[i][j]=='p' || chessboard[i][j]=='P'){
          pawn(i,j);
        }else if(chessboard[i][j]=='r' || chessboard[i][j]=='R'){
          rook(i,j);
        }else if(chessboard[i][j]=='b' || chessboard[i][j]=='B'){
          bishop(i,j);
        }else if(chessboard[i][j]=='n' || chessboard[i][j]=='N'){
          knight(i,j);
        }
       
      }
    }
    print_chessboard();
  }
  return 0;
}
