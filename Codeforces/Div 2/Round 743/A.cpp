//Arissa Yoshida
//A. Countdown - https://codeforces.com/contest/1573/problem/A
#include <bits/stdc++.h>
#define MAXN 10000000
#define MAX 4001
using namespace std;
typedef long long ll;
ll MOD = 1000000007;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      string s;
      cin >> s;
      int num=0;
      ll sum=0;
      for(int i=0;i<n;i++){
        if(s[i]!='0'){
          num = s[i]-'0';
          if(i!=n-1){
            sum+=num+1;
          }else{
            sum+=num;
          }
          
        }
      }
      cout << sum << endl;
    }

  return 0;
}
