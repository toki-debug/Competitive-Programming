//Arissa Yoshida
//A. Anton and Danik - https://codeforces.com/contest/734/problem/A
#include <bits/stdc++.h>
using namespace std;

#define MAXN 79888

int main(){
  string s;
  int n;
  cin >> n;
  cin >> s;
  int a=0,d=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='A'){
      a++;
    }else{
      d++;
    }
  }
  if(a>d){
    cout << "Anton" << endl;
  }else if(a<d){
    cout << "Danik" << endl;
  }else{
    cout << "Friendship" << endl;
  }
  return 0;
}
