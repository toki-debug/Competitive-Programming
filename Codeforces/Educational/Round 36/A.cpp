//Arissa Yoshida
//A. Garden - https://codeforces.com/contest/915/problem/A

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000 
typedef long long int ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n,k;
  cin >> n >> k;
  vector<int>v;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(),v.end());
  for(int i=n-1;i>=0;i--){
    if(k%v[i]==0){
      cout << k/v[i] << endl;
      return 0;
    }
  }
  

  return 0;
}
