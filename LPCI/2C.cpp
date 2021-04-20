//Arissa Yoshida 04/2021
//https://www.spoj.com/problems/ONP/

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >>t;
    char x;
    stack<char>sinal;
    queue<char>letra;
    getchar();
    while(t--){
      while((x = getchar())!='\n'){
       
       if(x>='a' && x<='z'){
         letra.push(x);
       }else if(x==')'){
          while(!letra.empty()){
            cout << letra.front();
            letra.pop();
          }
            cout << sinal.top();
            sinal.pop();
          
       }else if(x!='('){
         sinal.push(x);
       }
      }
     cout << endl;
    }
    
    return 0;
}
