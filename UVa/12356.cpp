//Arissa Yoshida
//Army Buddies - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3778

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 100005
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll s,b;
  
  while(cin>>s>>b){
    if(s==0 && b==0){
      break;
    }
    ll l,r;

    vector<ll>dir;
    vector<ll>esq;
    dir.push_back(0);
    esq.push_back(0);
 
    
    for(ll i=1;i<=s;i++){
      dir.push_back(i+1);
      esq.push_back(i-1);
    }

    ll pos2;
    for(int i=0;i<b;i++){
      cin >> l >> r;
      dir[esq[l]] = dir[r];
      esq[dir[r]] = esq[l];
      if(esq[l]<1 && dir[r]>s){
        cout << "* *" << endl;
      }else if(esq[l]<1){
        cout << "* " << dir[r] << endl;
      }else if(dir[r]>s){
        cout << esq[l] << " *" << endl;
      }else{
        cout << esq[l] << " " << dir[r] << endl;
      }
    }
    cout << "-" << endl;
  }

}
