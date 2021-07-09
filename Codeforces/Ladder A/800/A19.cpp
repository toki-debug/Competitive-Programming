//Arissa Yoshida
//A. Helpful Maths - https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
  vector<int>a;
  string s;
  getline(cin,s);
  for(int i=0;i<s.size();i++){
    if(s[i]!='+'){
      a.push_back(s[i]-48);
    }
  }
  sort(a.begin(),a.end());
  for(int i=0;i<a.size();i++){
    if(i==0){
      cout << a[i];
    }else{
      cout << '+' << a[i];
    }
  }
  cout << endl;
 
  return 0;
}
