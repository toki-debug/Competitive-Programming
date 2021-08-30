//Arissa Yoshida
//A. Quasi-palindrome - https://codeforces.com/contest/863/problem/A

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  string s;
  cin >> s;
  int zero=0;
  for(int i=s.size()-1;i>=0;i--){
      if(s[i]=='0'){
          zero++;
      }else{
          break;
      }
  }
  reverse(s.begin(),s.end());
  for(int i=0;i<zero;i++){
      s+="0";
  }
  string comp = s;
  reverse(comp.begin(),comp.end());
  if(comp==s){
      cout << "YES" << endl;
  }else{
      cout << "NO" << endl;
  }   
  
}

