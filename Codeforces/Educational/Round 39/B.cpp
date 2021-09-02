// Arissa Yoshida
//B. Weird Subtraction Process - https://codeforces.com/contest/946/problem/B
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  unsigned long long int a,b,c;
  cin >> a >> b;
  while(1){
    if(a==0 || b==0){
      break;
    }else if(a>=2*b){
      c = a/(b*2);
      a-=c*(2*b);
    }else if(b>=2*a){
      c = b/(a*2);
      b-=c*(a*2);
    }else{
      break;
    }
  }
  cout << a << " " << b << endl;

  
  return 0;
}
