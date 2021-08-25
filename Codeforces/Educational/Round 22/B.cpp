// Arissa Yoshida
//B. The Golden Age - https://codeforces.com/contest/813/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll x,y,l,r;
    cin >> x >> y >> l >> r;
    ll mx = log(r)/log(x);
    ll my = log(r)/log(y);
    vector<ll>a;
    vector<ll>b;
    ll o=1;
    
    for(ll i=0;i<=mx;i++){
        a.push_back(o);
        o*=x;
    }
    o=1;
    for(ll i=0;i<=my;i++){
        b.push_back(o);
        o*=y;
    }
    set<ll>res;
    set<ll>:: iterator itr;
    
    for(ll i=0;i<a.size();i++){
        if(a[i]+1>r){
            break;
        }
        for(ll j=0;j<b.size();j++){
            if(a[i]+b[j]>r){
                break;
            }else if(a[i]+b[j]>=l){
                res.insert(a[i]+b[j]);
            }
        }
    }   
    ll maximo=0;
    itr = res.begin();
    ll ant = l-1;

    for(itr=res.begin();itr!=res.end();++itr){
       
        maximo = max(maximo, (*itr-ant)-1);

        ant = *itr;
    } 
    maximo = max(maximo,(r-ant));
    if(res.empty()){
        maximo = r-l+1;
    }
    cout << maximo << endl;
    
    
    return 0;
}
