//Arissa Yoshida
//A. Book Reading - https://codeforces.com/contest/884/problem/A

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n,t;
  int d = 0;
  int sub=0;
  int day = 86400;
  cin >> n >> t;
  int r=n;
  int f =1;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    sub+= day - a;
    if(sub>=t && f){
      r = i+1;
      f=0;
      
    }
  }
  cout << r << endl;

  return 0;
}
