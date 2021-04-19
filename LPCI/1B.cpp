//Arissa Yoshida 04/2021
//https://vjudge.net/problem/UVA-11799

#include <bits/stdc++.h>
using namespace std;


int main()
{
  int x;
  cin >> x;
  int a=0,b=0,n=0;
  for(int i=1;i<=x;i++){
    cin >> n;
    for(int j=0;j<n;j++){
      cin >> a;
      b = max(a,b);
    }
    cout << "Case " << i << ": " << b <<endl;
      b=0;    
  }
    return 0;
}
