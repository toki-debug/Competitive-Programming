//Arissa Yoshida
//A. Games - https://codeforces.com/contest/268/problem/A

#include <bits/stdc++.h>
using namespace std;

 
int main(){
  int n;
  cin >> n;
  int a[n+1];
  int b[n+1];
  for(int i=0;i<n;i++){
    cin>> a[i]  >>b[i];
  }
  int r=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(a[i]==b[j] && i!=j){
        r++;
      }
    }
  }
  cout << r << endl;
  return 0;
}
