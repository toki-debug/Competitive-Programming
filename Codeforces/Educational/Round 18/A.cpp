//Arissa Yoshida
//A. New Bus Route - https://codeforces.com/contest/792/problem/A
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll a;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll minimo = 9999999999;
    ll s=0;
    for(ll i=1;i<n;i++){
        minimo = min(minimo,abs(v[i]-v[i-1]));
    }
    for(ll i=1;i<n;i++){
        if(abs(v[i]-v[i-1])==minimo){
            s++;
        }
    }
    cout << minimo <<" " <<  s << endl;
    return 0;
}
