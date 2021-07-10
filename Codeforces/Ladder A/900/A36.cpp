//Arissa Yoshida
//A. Dubstep - https://codeforces.com/contest/208/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  string c;
  string a="";
  int flag =0;
  getline(cin,c);
  for(int i=0;i<c.size();i++){
    if(c[i]=='W' && c[i+1]=='U' && c[i+2]=='B'){
      i+=2;
      if(a[a.size()-1]!=' ' && a.size()!=0){
        a+=' ';
      }
    }else{
      a+=c[i];
    }
  }
  cout << a << endl;
  return 0;
}

