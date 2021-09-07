//Arissa Yoshida
//B. Minimum Ternary String - https://codeforces.com/contest/1009/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 100005
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
 
  string dois ="";
  string zero ="";
  string um = "";
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
      um+="1";
    }
  }
  for(int i=0;i<s.size();i++){
    
    if(s[i]=='2'){
      dois+="2";
      if(zero.size()!=0){
        cout << zero;
        cout << um;
        um="";
        zero="";
      }

    }
    if(s[i]=='0'){
      zero+="0";
      if(dois.size()!=0){
        cout << um;
        cout << dois;
        um="";
        dois="";
      }
    }
  }
  cout << zero << um << dois << endl;

}
