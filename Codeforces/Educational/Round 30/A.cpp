//Arissa Yoshida
//A. Chores - https://codeforces.com/contest/873/problem/A

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n,k,x;
  cin >> n >> k >> x;
  int sum=0;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    if(i<n-k){
      sum+=a;
    }
  }
  cout << sum+(k*x) << endl;
  

}
