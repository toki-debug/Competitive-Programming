// Arissa Yoshida
//A. Partition - https://codeforces.com/contest/946/problem/A

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
  int c=0,b=0;
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    if(a>=0){
      b+=a;
    }else{
      c+=a;
    }
  }
  cout << b-c << endl;
  
  return 0;
}
