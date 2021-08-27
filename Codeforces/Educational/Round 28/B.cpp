//Arissa Yoshida
//B. Math Show - https://codeforces.com/contest/846/problem/B
#include <bits/stdc++.h>
#define MAX
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k,m;
    cin >> n >> k >> m;
    vector<ll>v;
    int tmsub =0;
    for(ll i=0;i<k;i++){
        ll a;
        cin >> a;
        tmsub+=a;
        v.push_back(a);
    }
    ll comp = m/tmsub;
    if(comp>n){
        comp =n;
    }
    
    sort(v.begin(),v.end());
    int mat[k+1][n+1];
    for(ll i=0;i<k;i++){
        for(ll j=0;j<n;j++){
            mat[i][j] = v[i]; 
        }
    }
    ll tmp=0;
    ll pontos=0;
    ll maximo = 0;
    for(ll z=0;z<=comp;z++){
        pontos =z*(k+1);
        tmp = z*(tmsub);
        
    for(ll i=0;i<k;i++){
        for(ll j=z;j<n;j++){
            tmp+=mat[i][j];
            if(tmp<=m){
                pontos++;
            }else{
                i=k;
                break;
            }
             
        }       
    }
     maximo = max(maximo, pontos);

    }
    cout << maximo << endl;

    
    return 0;
}
