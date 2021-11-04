//Arissa Yoshida
//A. Linear Keyboard - https://codeforces.com/contest/1607/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
 
#define endl '\n'
 
typedef long long ll;
 
int main() {
  no_tle_pls
  int t;
  cin >> t;
  
 
  while(t--){
    string alfa;
    string s;
    cin >> alfa;
    vector<pair<int,int>>al;
    for(int i=0;i<alfa.size();i++){
      al.push_back(make_pair(alfa[i]-'a',i+1));
    }
    cin >> s;
    sort(al.begin(),al.end());
    int num =0;
    int ant;
    int t =0;
    int c =0;
    int j=0;
    vector<int>v;
    for(int i=0;i<s.size();i++){
      t= lower_bound(al.begin(),al.end(),make_pair(s[i]-'a',0)) - al.begin(); 
      v.push_back(al[t].second);
    }
    t =0;
   
    for(int i=1;i<v.size();i++){
      //cout << v[i] << " ";
      t+= abs(v[i]-v[i-1]);
    }
    cout << t <<endl;
    
  }
 
  return 0;
}
