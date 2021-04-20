//Arissa Yoshida 04/2021
//http://codeforces.com/problemset/problem/984/A

#include <bits/stdc++.h>
using namespace std;


int main()
{
  int x;
  cin >> x;
  int a;
  vector<int>b;
  for(int i=0;i<x;i++){
    cin >> a;
    b.push_back(a);
  }
  sort(b.begin(),b.end());
    if(x%2==0){
      cout << b[((x/2)-1)] << endl;
    }else{
      cout << b[(x/2)] << endl;
    }
    
    return 0;
}
