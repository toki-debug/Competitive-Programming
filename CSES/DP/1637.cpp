//Arissa Yoshida
//Removing Digits - https://cses.fi/problemset/task/1637/
#include <bits/stdc++.h>
#define MAXN 10000000
#define MAX 4001
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int r=0;
    while(n>0){
      string s;
      s = to_string(n);
      int maximo =0;
      for(int i=0;i<s.size();i++){
        maximo = max(maximo, (int)s[i]);
      }
      maximo-='0';
      n-=maximo;
      r++;
    }
    cout << r << endl;
 
  return 0;
}
