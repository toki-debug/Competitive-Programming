//Arissa Yoshida
//A. Water The Garden - https://codeforces.com/contest/920/problem/A

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;
 
int main() {
  /*ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);*/
  int t;
  cin >> t;
  while(t--){
    int n,  k;
    cin >> n >> k;
    vector<int>w(n,0);
    for(int i=0;i<k;i++){
      int a;
      cin >> a;
      w[a-1] = 1;
    }
    int f=0;
    int seg =1;
    for(int i=0;i<n;i++){
      if(w[i]==0){
        f=1;
        break;
      }
    }
    while(f){
      seg++;
      f=0;
    for(int i=0;i<n;i++){
      if(w[i]==1){
        if(i-1>=0 &&  w[i-1]==0){
          w[i-1] =1;
        }
        if(i+1<n && w[i+1]==0){
          w[i+1] =1;
          i++;
        }
        
      }
    }
    for(int i=0;i<n;i++){
      if(w[i]==0){
        f=1;
        break;
      }
    }
    }
    cout << seg << endl;
 
 
  }
  return 0;
}
