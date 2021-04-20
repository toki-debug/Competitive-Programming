//Arissa Yoshida
//https://codeforces.com/contest/81/problem/A

#include <bits/stdc++.h>
using namespace std;


int main()
{
  char c;
  string s;
  stack<char>x;
  getline(cin,s);

  for(int i=s.size()-1;i>=0;i--){
    if(!x.empty()){
      if(x.top()==s[i]){
        x.pop();
      }else{
        x.push(s[i]);
      }
    }else{
      x.push(s[i]);
    }
  }
  int k=0;

  while(!x.empty()){
    cout << x.top();
    x.pop();
  }
  cout<<endl;
  

    
    return 0;
}
