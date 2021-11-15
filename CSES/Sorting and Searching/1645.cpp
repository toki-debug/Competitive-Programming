// Arissa Yoshida
//Nearest Smaller Values - https://cses.fi/problemset/task/1645

#include <bits/stdc++.h>
using namespace std;
#define PI 2 * acos(0.0)
#define MAXN 100005
#define fast_io                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;
#define endl "\n";

void setIO(string s) {
  if (!s.empty()) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

int main() {
  setIO("");
  fast_io 
  int n;
  cin >> n;
  vector<int>v(n+1);
  v[0] = 0;
  for(int i=1;i<=n;i++){
    cin >> v[i];
  }
  stack<int>pilha;
  pilha.push(0);
  for(int i=1;i<=n;i++){
    while(v[i]<=v[pilha.top()]){
      pilha.pop();
    }
    cout << pilha.top() << " ";
    pilha.push(i); 
  }
  cout << endl;
  

  return 0;
