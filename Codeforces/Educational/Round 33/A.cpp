//Arissa Yoshida
//A. Chess For Three - https://codeforces.com/contest/893/problem/A

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
  
  map<int,int>mp;
  mp[1] =1;
  mp[2] =1;
  mp[3]=0;
  int f=1;
  for(int i=0;i<n;i++){
    int num;
    cin >> num;
    if(mp[num]!=1){
      f=0;
    }
    for(int i=1;i<=3;i++){
      if(mp[i]){
        mp[i]=0;
      }else{
        mp[i]=1;
      }
    }
    mp[num]=1;

  }
  if(f){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  

  return 0;
}
