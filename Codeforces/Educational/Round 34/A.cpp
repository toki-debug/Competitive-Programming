//Arissa Yoshida
//A. Hungry Student Problem - https://codeforces.com/contest/903/problem/A

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
  vector<int>a;
  for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
      a.push_back(i*3 + j*7);
    }
  }
  sort(a.begin(),a.end());
  int x;
  while(n--){
    cin >> x;
    if(binary_search(a.begin(),a.end(),x)){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }

  return 0;
}
