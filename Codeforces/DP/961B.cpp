//Arissa Yoshida
//B. Lecture Sleep - https://codeforces.com/contest/961/problem/B

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  vector<bool>ver;
  vector<int>m;
  int n,k;
  int r=0;
  cin >> n >> k;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    m.push_back(a); 
  }
  for(int i=0;i<n;i++){
    bool a;
    cin >> a;
    ver.push_back(a);
    if(ver[i]){
      r+=m[i];
    }
  }
  int maximo=r;
  vector<int>result;
  result.push_back(0);
  int sum=0;
  int ant=0;
  for(int i=1;i<=n;i++){
    if(ver[i-1]){
      result.push_back(result[ant]);
    }else{
      sum+=m[i-1];
      result.push_back(sum);
    }
    ant++;    
  }
  int num=0;
  for(int i=1;i<=n;i++){
    num = result[i];
    if(i-k>=0){
      num= result[i]-result[i-k];
    }
    
    maximo = max(maximo, num+r);
  }
  cout << maximo << endl;
  

  return 0;
}
