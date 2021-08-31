//Arissa Yoshida
//B. Buggy Robot - https://codeforces.com/contest/888/problem/B

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
  string s;
  cin >> s;
  int d=0,e=0,c=0,b=0;
  for(int i=0;i<n;i++){
    if(s[i]=='L'){
      e++;
    }else if(s[i]=='D'){
      b++;
    }else if(s[i]=='R'){
      d++;
    }else{
      c++;
    }
  }
  
    int sum =0;
    sum+=min(d,e);
    sum+=min(c,b);

    cout << sum*2 << endl;



  return 0;
}
