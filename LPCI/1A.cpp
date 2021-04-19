//Arissa Yoshida 04/2021
//https://vjudge.net/problem/UVA-12015
#include <bits/stdc++.h>
using namespace std;


int main()
{
  int t;
  cin >> t;
  for(int i=1;i<=t;i++){
    string s[11];
    int t[11];
    int m = 0;
    for(int j=0;j<10;j++){
      cin >> s[j] >> t[j];
      m = max(m,t[j]);
    }
    cout << "Case #" << i <<":" << endl;
    for(int j=0;j<10;j++){
      if(m==t[j]){
        cout << s[j] << endl;
      }
      
    }
    
  }

    return 0;
}
