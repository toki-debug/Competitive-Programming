//GDB
//B. Mocha and Red and Blue - https://codeforces.com/contest/1559/problem/B

#include <bits/stdc++.h>
#define MAXN 10000000
#define MAX 4001
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  map<char,char>mp;
  mp['R'] = 'B';
  mp['A'] = 'R';
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string aux ="";
    string aux2 ="";
    int f=1;
    char ultimo;
    for(int i=0;i<s.size();i++){
      if(s[i]=='?'){
        if(f){
          aux+= 'B';
          aux2+= 'R';
          f=0;
        }else{
          aux+='R';
          aux2+= 'B';
          f=1;
        }
      }else{
        if(aux[aux.size()-1]==s[i]){
          cout << aux2;
        }else{
          cout << aux;
          
        }
        f=1;
        cout << s[i];
        ultimo = s[i];
        aux ="";
        aux2 ="";
      }
    }
    if(aux!=""){
      if(aux[0]==ultimo){
          cout << aux2;
        }else{
          cout << aux;
          
        }
      }
    
    cout << endl;
  }

  return 0;
}
