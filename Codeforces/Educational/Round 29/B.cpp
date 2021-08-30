//Arissa Yoshida
//B. Kayaking - https://codeforces.com/contest/863/problem/B

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
  int m = n;
  n*=2;
  vector<int>v;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(),v.end());
  int minimo = INT_MAX;
  for(int i=0;i<n;i++){
    
    for(int j=i+1;j<n;j++){
      int sum=0;
      int a=-1,b=-1;
      for(int k=0;k<n;k++){
        if(k==i || k==j){
          continue;
        }
        if(a<0){
          a = v[k];
        }else if(b<0){
          b = v[k];
          sum+=abs(a-b);
          a=-1;
          b=-1;
        }

        
      }
      minimo = min(minimo, sum);
    }
  }
  
  
  
  cout << minimo << endl;
  
   
}
