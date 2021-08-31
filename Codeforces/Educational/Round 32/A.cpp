//Arissa Yoshida
//A. Local Extrema - https://codeforces.com/contest/888/problem/A

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  vector<int>v;
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    v.push_back(a);
  }
  int extreme =0;
  for(int i=1;i<n-1;i++){
    if(v[i]>v[i-1] && v[i]>v[i+1]){
      extreme++;
    }else if(v[i]<v[i-1] && v[i]<v[i+1]){
      extreme++;
    }
  }
  cout << extreme << endl;

  return 0;
}
