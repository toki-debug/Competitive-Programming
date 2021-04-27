//Arissa Yoshida 04/2021
//https://codeforces.com/problemset/problem/713/A

#include <bits/stdc++.h>
using namespace std;

map<string, int> aqui;


int main(){
    int x;
    char c;
    string s;
    
    
    int t;
    cin >> t;
      while(t--){
        string a;
        cin >> c >> s;
          int tam =0;
          tam = 18 -s.size();
          for(int i=0;i<tam;i++){
            a.push_back('0');
          }
          x =0;
          for(int i = tam;i<=18;i++){
            if((s[x]-'0')%2==0){
              a.push_back('0');
            }else{
              a.push_back('1');
            }
            x++;
            }
           if(c=='+'){
             aqui[a]+=1;
           }else if(c=='-'){
             aqui[a]-=1;
           }else{
             cout << aqui[a] << endl;
           }
            x++;
          }
          

      
    
 
  
    return 0;
}

