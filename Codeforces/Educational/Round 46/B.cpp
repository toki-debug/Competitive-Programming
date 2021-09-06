//Arissa Yoshida
//B. Light It Up - https://codeforces.com/contest/1000/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n,m;
  cin >> n >> m;
  ll a;
  vector<ll>inter;
  vector<ll>aceso;
  vector<ll>apagado;
  //aceso.push_back(0);
  //apagado.push_back(0);
  ll ant=0;
  for(int i=0;i<n;i++){
    cin >> a;
  
      inter.push_back(a-ant);
    
    ant = a;
  }
  ll par=0,im=0;
  inter.push_back(m-a);
  for(int i=0;i<inter.size();i++){
    if(i%2==0){
      par+=inter[i];
      
    }else{
      im+=inter[i];
     
    
    }
    aceso.push_back(par);
    apagado.push_back(im);
  }
  ll r=aceso[inter.size()-1];
  ll maximo =r;
  for(int i=0;i<inter.size();i++){
    r=aceso[inter.size()-1];
    if(aceso[inter.size()-1]-aceso[i]<apagado[inter.size()-1]-apagado[i]){
      r -= aceso[inter.size()-1]-aceso[i]; 
      r+=apagado[inter.size()-1]-apagado[i]-1;
      maximo = max(maximo, r);
    }
  }
  
  cout << maximo << endl;
 

}
