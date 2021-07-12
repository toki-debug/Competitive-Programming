//Arissa Yoshida
//A. Ilya and Bank Account - https://codeforces.com/contest/313/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  if(s[0]=='-'){
    int f =0;
  if(s[s.size()-2]>s[s.size()-1]){
    s.erase(s.end()-2);
  }else{
     s.erase(s.end()-1);
  }
  if(s=="-0"){
    cout << 0 <<endl;
  }else{
    cout << s << endl;
  }
 
  }else{
    cout << s << endl;
  }
  return 0;
}
