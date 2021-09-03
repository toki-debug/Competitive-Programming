//Arissa Yoshida
//A. Minimum Binary Number - https://codeforces.com/contest/976/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;
typedef vector<int> vec;
typedef vector<pa> vep;

int main() {
  int n;
  cin >> n;
  int z=0,u=0;
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
      u++;
    }else{
      z++;
    }
  }
  if(u==0){
    cout << 0 << endl;
  }else{
    cout << 1;
    for(int i=0;i<z;i++){
      cout << 0;
    }
    cout << endl;
  }
  
}
