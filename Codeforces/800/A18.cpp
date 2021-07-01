//Arissa Yoshida
//A. Cakeminator - https://codeforces.com/contest/330/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  vector<int>l(n+1,0);
  vector<int>c(m+1,0);
  char a;
  
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cin >>a;
      if(a=='S'){
        l[i]=1;
        c[j]=1;
      }
    }
  }
  int r =0;
  int z=0;
  for(int i=1;i<=n;i++){
    if(l[i]==0){
      r+=(m);
      z++;
    }
  }
  for(int i=1;i<=m;i++){
    if(c[i]==0){
      r+=(n-z);
    }
  }
  cout << r << endl;
  

  
  return 0;
}
