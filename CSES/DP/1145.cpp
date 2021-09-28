//Arissa Yoshida
//Increasing Subsequence - https://cses.fi/problemset/task/1145/


#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define fast_io                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;
 
int main() {
  fast_io ll n;
  cin >> n;
  vector<int>v;
  int a;
  cin >> a;
  v.push_back(a);
  for(int i=1;i<n;i++){
    cin >>a;
    int pos = lower_bound(v.begin(),v.end(),a)- v.begin();    
    if(pos<v.size()){
      if(a<v[pos]){
        v[pos]=a;
      }
    }else{
      v.push_back(a);
    }
  }
  cout << v.size() << endl;
  
}
