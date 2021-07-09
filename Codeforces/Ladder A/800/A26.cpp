//Arissa Yoshida
//A. Team Olympiad - https://codeforces.com/contest/490/problem/A

#include <bits/stdc++.h>
using namespace std;

#define MAXN 79888

int main(){
  int n;
  cin >> n ;
  int num;
  vector<int>a;
  vector<int>b;
  vector<int>c;

  for(int i=0;i<n;i++){
      cin >> num;
    if(num==1){
        a.push_back(i+1);
    }else if(num==2){
        b.push_back(i+1);
    }else{
        c.push_back(i+1);
    }
  }
  num = min(a.size(),min(b.size(),c.size()));
  
  cout << num << endl;
  for(int i=0;i<num;i++){
      cout << a[i]<< " " << b[i] << " " << c[i] << endl;
  }

  return 0;
}
