//Arissa Yoshida
//A. Nearest Minimums - https://codeforces.com/contest/911/problem/A
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
  map<int,vector<int>>mp;
  int a;
  int num =INT_MAX;
  for(int i=0;i<n;i++){
    cin >> a;
    mp[a].push_back(i);
    num = min(num, a);
  }
  a = INT_MAX;
  int c,f;
  for(int i=1;i<mp[num].size();i++){
    c = 
    a = min(a,abs(mp[num][i]-mp[num][i-1]));
  }
  cout << a << endl;
  

  

  return 0;
}
