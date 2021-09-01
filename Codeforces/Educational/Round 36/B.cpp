//Arissa Yoshida
//B. Browser - https://codeforces.com/contest/915/problem/B

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000 
typedef long long int ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n,pos,l,r;
  cin >> n >> pos >> l >> r;
  int sum=0;
  int sum2=0;
  int pos2= pos;
  if(l-1){
    sum++;
    if(pos!=l){
     sum+=abs(pos-l); 
     pos = l;
    }
  }
  if(n-r){
    sum++;
    if(pos!=r){
     sum+=abs(pos-r); 
    }

  }

  if(n-r){
    sum2++;
    if(pos2!=r){
     sum2+=abs(pos2-r); pos2 = r;
    }

  }
   if(l-1){
    sum2++;
    if(pos2!=l){
     sum2+=abs(pos2-l); 
     
    }
  }
  
  
  cout << min(sum,sum2) << endl;
  
  

  return 0;
}
