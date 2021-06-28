//Arissa Yoshida
//A. Roma and Lucky Numbers - https://codeforces.com/contest/262/problem/A
#include <bits/stdc++.h>
using namespace std;
 
int main()
{  
  int n,t;
  string a;
  long int r=0,f=0;
  cin >> n >> t;
  for(int i=0;i<n;i++){
    cin >> a;
    f=0;
    for(int i=0;i<a.size();i++){
      if(a[i]=='4' || a[i] == '7'){
        f++;
      }
    }
    if(f<=t){
      r++;
    }
  }
  cout << r << endl;
return 0;
}
