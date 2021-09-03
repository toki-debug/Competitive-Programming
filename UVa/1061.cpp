//Arissa Yoshida
//1061 - Consanguine Calculations - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3502
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string a,b,c;
  map<string,string>mp;
  map<int,string>mpnum;
  map<string,int>parent;
  map<int,string>child;
  mp["A"] = "0";
  mp["B"] = "1";
  mp["AB"] = "2";
  mp["O"] = "3";
  mpnum[0] = "A";
  mpnum[1] = "B";
  mpnum[2] = "AB";
  mpnum[3] = "O";

  int k=0;  
  for(int i=0;i<4;i++){
    
    for(int j=i;j<4;j++){
      string num ="";
      num+=i+'0';
      num+=j+'0';
      parent[num] = k;
      child[k] = num;
      k++; 
    }
  }
  int vet[10][4] = {1,0,0,1,
                    1,1,1,1,
                    1,1,1,0,
                    1,0,0,1,
                    0,1,0,1,
                    1,1,1,0,
                    0,1,0,1,
                    1,1,1,0,
                    1,1,0,0,
                    0,0,0,1};
  
  int caso=0;
  while(cin >> a >> b >> c){
    if(a=="E" &&  b=="N" && c =="D"){
      break;
    }
    caso++;
    cout << "Case "<< caso << ": ";
    if(c=="?"){
      cout << a << " " << b << " ";
      if(a=="O-" && b=="O-"){
        cout << "O-" << endl;
      }else{
    int sa=0,sb=0,sc=0;
    if(a[a.size()-1]=='-'){
        sa=0;
      }else{
        sa=1;
      }
      if(b[b.size()-1]=='-'){
        sb=0;
      }else{
        sb=1;
      }
   
    a.pop_back();
    b.pop_back();
    c.pop_back();
    
     
      string aux="";
      aux+=mp[a];
      aux+=mp[b];
      if(!parent[aux]){
        aux="";
        aux+=mp[b];
        aux+=mp[a];
        
      }
      int linha = parent[aux];
      string r="{";
        for(int i=0;i<4;i++){
          if(vet[linha][i]){
            if(sa==0 && sb==0){
              r+=mpnum[i]+"-, ";
            }else{
              r+=mpnum[i]+"+, "+mpnum[i]+"-, ";
              
              
            } 
          }
        }
       r = r.substr(0, r.size()-2);
       r+="}";
       if(r.size()<3){
         cout << "IMPOSSIBLE" << endl;
       }else{
         cout << r << endl;
       }
    }
    }else if(b=="?"){
      cout << a <<" ";
      int sa=0,sb=0,sc=0;
      if(a[a.size()-1]=='-'){
        sa=0;
      }else{
        sa=1;
      }
      if(c[c.size()-1]=='-'){
        sc=0;
      }else{
        sc=1;
      }
      a.pop_back();
      b.pop_back();
      c.pop_back();
      string num = mp[c];
      int  coluna = num[0]-'0';
      string r="{";
      string ch = mp[a];
      string p;
      int v=0;
      for(int i=0;i<10;i++){
        if(vet[i][coluna]){
          child[i];
          
          int flag=2;
        
          if(child[i][0]==ch[0]){
            flag=1;
          }else if(child[i][1]==ch[0]){
            flag=0;
          }
          p = child[i][flag];
          
          if(flag==1 || flag ==0){
           
            if(sc==1 && sa==0){
              //Todos tem que ser positivos
              r+=mpnum[p[0]-'0']+"+, ";
              v++;
            }else{
              r+=mpnum[p[0]-'0']+"+, "+mpnum[p[0]-'0']+"-, ";
              v++;
            }
          }
        }
      }
      r = r.substr(0, r.size()-2);
       r+="}";
       if(!v){
         cout << "IMPOSSIBLE ";
       }else{
         cout << r << " ";
       }

       cout << c;
       if(sc==0){
         cout << "-" << endl;
       }else{
         cout << "+" << endl;
       }

    }else if(a=="?"){
      int sa=0,sb=0,sc=0;
      if(b[b.size()-1]=='-'){
        sb=0;
      }else{
        sb=1;
      }
      if(c[c.size()-1]=='-'){
        sc=0;
      }else{
        sc=1;
      }
      
   
      
      b.pop_back();
      c.pop_back();
      string num = mp[c];
      int  coluna = num[0]-'0';
      string r="{";
      string ch = mp[b];
      string p;
      int v=0;
      for(int i=0;i<10;i++){
        if(vet[i][coluna]){
          child[i];
          
          int flag=2;
        
          if(child[i][0]==ch[0]){
            flag=1;
          }else if(child[i][1]==ch[0]){
            flag=0;
          }
          p = child[i][flag];
          
          if(flag==1 || flag ==0){
           
            if(sc==1 && sb==0){
              //Todos tem que ser positvos
              r+=mpnum[p[0]-'0']+"+, ";
              v++;
            }else{
              r+=mpnum[p[0]-'0']+"+, "+mpnum[p[0]-'0']+"-, ";
              v++;
            }
          }
        }
      }
      r = r.substr(0, r.size()-2);
       r+="}";
       if(!v){
         cout << "IMPOSSIBLE";
       }else{
         cout << r;
       }
      cout << " "<< b ;
      if(sb==0){
         cout << "- ";
       }else{
         cout << "+ ";
       }
       cout << c;
       if(sc==0){
         cout << "-" << endl;
       }else{
         cout << "+" << endl;
       }

    }
    

  }
  
}
