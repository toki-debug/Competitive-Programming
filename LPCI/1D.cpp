//Arissa Yoshida 04/2021
//https://vjudge.net/problem/UVA-10346

#include <bits/stdc++.h>
using namespace std;


int main()
{
  int n,k;
  
  while(scanf("%d %d",&n,&k)!=EOF){
    int a;
    int s=n;
    while(n>=k){
      a = n/k;
      s+= a;  
      n%=k;
      n+=a;
    }
    cout << s <<endl;
  }

    return 0;
}
