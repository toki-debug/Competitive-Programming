//Arissa Yoshida
//A. Codehorses T-shirts - https://codeforces.com/contest/1000/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  string s;
  map<string,int>a;
  map<string,int>:: iterator itr;
  map<string,int>b;
  for(int i=0;i<n;i++){
    cin >> s;
    a[s]++;
  }
  for(int i=0;i<n;i++){
    cin >> s;
    b[s]++;
  }

  for(itr =a.begin();itr!=a.end();++itr){
   
      n-=min(itr->second,b[itr->first]);
    
  }
  
  
  
  cout << n  << endl;

}
