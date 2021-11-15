//Arissa Yoshida
//Advertisement - https://cses.fi/problemset/task/1142/

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
  vector<ll>v(n);
  vector<ll>v2(n);
 
  for(int i=0;i<n;i++){
    cin >> v[i];
    v2[i] = i;
  }
  stack<ll>pilha;
  pilha.push(0);
  ll maximo = 0;
  for(int i=1;i<n;i++){
    while(!pilha.empty() && v[i]<=v[pilha.top()]){
      v2[i] = v2[pilha.top()];
      v2[pilha.top()]-= i;
      pilha.pop();
    }
    pilha.push(i);
  }
  while(!pilha.empty()){
      v2[pilha.top()]-=n;
      pilha.pop();
  }
  for(int i=0;i<n;i++){
    maximo = max(abs(v2[i]*v[i]),maximo);
  }
  cout << maximo << endl;
 
  
  
 
  return 0;
}
