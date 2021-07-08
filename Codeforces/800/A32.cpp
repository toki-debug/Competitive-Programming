//Arissa Yoshida
//A. HQ9+ - https://codeforces.com/contest/133/problem/A

#include <bits/stdc++.h>
using namespace std;

#define MAXN 79888

int main(){
  string s;
  getline(cin,s);
  int flag =0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
      flag ++;
      break;
    }
  }
  if(flag){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}
