//Arissa Yoshida
//A. Collecting Beats is Fun - https://codeforces.com/contest/373/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  int k;
  cin >> k;
  string a;
  int sum =0;
  vector<int>reta(10,0);
  for(int i=0;i<4;i++){
    cin >> a;
    sum=0;
    for(int j=0;j<a.size();j++){
      if(a[j]!='.'){
        reta[a[j]-'0']++;
      }
    }
  }
  
  for(int i=1;i<=9;i++){
    if(reta[i]>(k*2)){
      sum=1;
      break;
    }
  }
  if(sum==1){
    cout << "NO" << endl;
  }else{
    cout << "YES" << endl;
  }
  
  
  return 0;
}

