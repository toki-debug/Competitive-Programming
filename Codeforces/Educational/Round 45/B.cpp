//Arissa Yoshida
//B. Micro-World - https://codeforces.com/contest/990/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n,k;
  cin >> n >> k;
  map<int,int>x;
  vector<int>v;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    v.push_back(a);
    x[a]++;
  }
  sort(v.begin(),v.end());
  int s=0;
  for(int i=0;i<n-1;i++){
    if(v[i]+k>=v[i+1] && v[i]<v[i+1]){
      s+=x[v[i]];
    }
    
  }
  cout << n-s << endl;
}
