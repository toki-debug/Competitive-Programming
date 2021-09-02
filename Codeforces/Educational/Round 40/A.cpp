//Arissa Yoshida
//A - Diagonal Walking - https://codeforces.com/contest/954/problem/A
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  string s;
  cin >> s;
  int u=0;
  int r=0;
  for(int i=1;i<s.size();i++){
    if(s[i-1] =='U' && s[i]=='R'){
      i++;
      r++;
    }else if(s[i-1] =='R' && s[i]=='U'){
      i++;
      r++;
    }
  }
  r+=(n-2*r);
  cout << r << endl;  
  
 
  
  return 0;
}
