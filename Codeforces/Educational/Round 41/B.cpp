// Arissa Yoshida
//B. Lecture Sleep	 - https://codeforces.com/contest/961/problem/B
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
  int a;
  vector<int>min;
  vector<int>ver;
  min.push_back(0);
  ver.push_back(0);
  for(int i=0;i<n;i++){
    cin >> a;
    min.push_back(a);
  }
  int sum=0;
  for(int i=1;i<=n;i++){
    cin >> a;
    if(a==1){
      sum+=min[i];
    }
    ver.push_back(a);
  }
  vector<int>zero;
  int maximo =0;
  zero.push_back(0);
  for(int i=1;i<=n;i++){
    if(ver[i]==0){
      zero.push_back(zero[i-1]+min[i]);
    }else{
      zero.push_back(zero[i-1]);
    }
    if(i>=k){
    maximo = max(maximo,zero[i]-zero[i-k]);
    }
  }
  cout << maximo + sum << endl;
  return 0;
}
