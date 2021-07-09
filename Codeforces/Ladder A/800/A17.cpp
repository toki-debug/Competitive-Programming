//Arissa Yoshida
//A. Eugeny and Array - https://codeforces.com/contest/302/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  int a,b,c=0,d=0;
  for(int i=1;i<=n;i++){
    scanf("%d",&a);
    if(a==-1){
      c++;
    }else{
      d++;
    }
  }
  for(int i=1;i<=m;i++){
    scanf("%d %d",&a,&b);
    b = b-(a-1);
    if(b%2==0 && c>=b/2 && d>=b/2){
      printf("1\n");
    }else{
      printf("0\n");
    }

  }

  
  return 0;
}
