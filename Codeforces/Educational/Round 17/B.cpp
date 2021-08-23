//Arissa Yoshida
//B - USB vs. PS/2 - https://codeforces.com/contest/762/problem/B

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a,b,c;
    cin >> a >> b >> c;
    ll m;
    cin >> m;
    vector<ll>usb;
    vector<ll>ps;
    ll val;
    string h;
    for(ll i=0;i<m;i++){
        cin >> val >> h;
        if(h=="USB"){
            usb.push_back(val);
        }else{
            ps.push_back(val);
        }
    }
    sort(usb.begin(),usb.end());
    sort(ps.begin(),ps.end());
    ll t =0;

    ll i=0;
    ll num=0;
    while(a--){
        if(i>=usb.size()){
            break;
        }
        t+=usb[i];
        i++;
        num++;
     
        
    }   
    ll j=0;
    while(b--){
        if(j>=ps.size()){
            break;
        }
        t+=ps[j];
        num++;
        j++;
        
        
    } 
    
    while(c--){
        if(j>=ps.size() && i>=usb.size()){
            break;
        }
        if(j<ps.size() && i<usb.size()){
        if(ps[j]>usb[i]){
            t+=usb[i];
            i++;
        }else{
            t+=ps[j];
            j++;
        }
        }else if(j<ps.size()){
            t+=ps[j];
            j++;
        }else if(i<usb.size()){
            t+=usb[i];
            i++;
        }
        num++;
       
        
    }
    cout << num << " " << t << endl;
     
    return 0;
}
