//Arissa Yoshida
//A. Bit++ - https://codeforces.com/contest/282/problem/A


#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin >> n;
  string a;
  int num=0;
  for(int i=0;i<n;i++){
    cin>> a;
    for(int j=0;j<a.size();j++){
      if(a[j]=='+'){
          num+=1;
          break;
      }else if(a[j]=='-'){
        num-=1;
        break;
      }
    }
  }
  cout << num << endl;
  return 0;
}
