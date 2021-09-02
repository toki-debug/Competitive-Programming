// Arissa Yoshida
//A. Word Correction - https://codeforces.com/contest/938/problem/A

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  map<char,int>mp;
  mp['a']=1;
  mp['e']=1;
  mp['i']=1;
  mp['o']=1;
  mp['u']=1;
  mp['y']=1;
  string s;
  int n;
  cin >> n >> s;
  int f=0;
  for(int i=0;i<s.size();i++){
    if(mp[s[i]]){
      if(!f){
        cout << s[i];
      }
      f=1;
    }else{
      cout << s[i];
      f=0;
    }  
  }
   cout << endl;
  return 0;
}
