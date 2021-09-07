//Arissa Yoshida
//B. Segment Occurrences - https://codeforces.com/contest/1016/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 100005
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n,m;
  ll x,y;
  ll q;
  cin >> n >> m >> q;
  string s;
  cin >> s;
  string a;
  cin >> a;
  string aux;
  int count=0;
  vector<int>v(s.size()+1,0);

  if(s.size()>=a.size()){
    for(int i=0;i<s.size();i++){
      if(i<=s.size()-a.size()){
      aux = s.substr(i,a.size());
      if(aux==a){
        count++;
      }
      }
      v[i+1]=count;
    }
  }
  ll aa,bb;
  while(q--){
    cin >> x >> y;
    if(s.size()>=a.size()){
    if((y-a.size()+1)<x){
      cout << 0 << endl;
    }else{
      cout << abs(v[x-1]-v[y-a.size()+1]) <<endl;
    }
    }else{
      cout << 0 << endl;
    }
    
    
  }

}
