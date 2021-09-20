//Arissa Yoshida
//B. Silly Mistake - https://codeforces.com/contest/1253/problem/B

#include <bits/stdc++.h>
#define MAXN 10000000

using namespace std;
typedef long long ll;
ll MOD = 1000000007;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  map<int,int>mp;
  int n;
  cin >> n;
  vector<int>v(n,0);
  vector<int>r;
  map<int,int>ver;
  for(int i=0;i<n;i++){
    cin >> v[i];
    ver[v[i]]=1;
  }
  int f=0;
  int br =0;
  int s;
  for(int i=0;i<n;i++){
    
    if(v[i]<0){
      if(mp[v[i]*-1]==v[i]){
        f++;
       
        s = mp.size();
        mp[v[i]*-1] =v[i]*-1;
        if(s == f){
           r.push_back(f*2);
           mp.clear();
           f=0;
           
        }
      }else{
        cout <<-1 << endl;
        br=1;
        break;
      }
    }else{
      if(mp[v[i]]!=0){
        cout << -1 << endl;
        br=1;
        break;
      }else{
        mp[v[i]] = v[i]*-1;
      }
      

    }
  }
  if(!br){
    if(mp.size()==f){
      cout << r.size() << endl;
  for(int i=0;i<r.size();i++){
    cout << r[i] << " ";
  }
  cout << endl;
   }else{
      cout << -1 << endl;
    }
     
  }
 

  return 0;
}
