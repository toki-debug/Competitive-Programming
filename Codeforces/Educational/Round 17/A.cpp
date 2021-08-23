//Arissa Yoshida
//A. k-th divisor - https://codeforces.com/contest/762/problem/A

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin >>n >> k;
    ll a;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        v.push_back(i+1);
    }
    ll l =0;
    ll pos;
    for(ll i=0;i<k;i++){
        cin >> a;
        pos= (a+l)%v.size();
        cout << v[pos] << " ";
        v.erase(v.begin()+pos);
        l = pos;
        l%=v.size();
         
    
    }
    cout << endl;
}
