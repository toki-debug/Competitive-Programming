//Arissa Yoshida
//B. Two Cakes - https://codeforces.com/contest/911/problem/B
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000 
typedef long long int ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n,a,b;
  cin >> n >> a >> b;
  int x=n,y=0;
  int val =0;
  int val2 =0;
  int minimo = 0;
  int maximo =0;
  while(x--){
    if(x==0){
      break;
    }
    y++;
    val = a/x;
    val2 = b/y; 
   
    minimo = min(val,val2);
    
    maximo = max(minimo, maximo);
    
  }
  cout << maximo << endl;

  return 0;
}
