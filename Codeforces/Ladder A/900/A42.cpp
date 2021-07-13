//Arissa Yoshida
//A. Lever - https://codeforces.com/contest/376/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  long long int ponto =0;
  vector<long long int>a;
  vector<long long int>b;
  long long int val=0;
  for(long long int i=0;i<s.size();i++){
    if(s[i]=='^'){
      ponto = i;
    }else{
      val = s[i]-'0';
      if(ponto==0){
        a.push_back(val);
      }else{
        b.push_back(val);
      }
    }
  }
  val =0;
  for(long long int i=0;i<a.size();i++){
    if(a[i]>=1 && a[i]<=9){
      val+=(a[i]*(ponto-i));
    }
  }
  for(long long int i=0;i<b.size();i++){
    if(b[i]>=1 && b[i]<=9){
      val-=(b[i]*(i+1));
    }
  }

  if(val==0){
    cout << "balance" << endl;
  }else if(val>0){
    cout << "left" << endl;
  }else{
    cout << "right" << endl;
  }
  
  return 0;
}

