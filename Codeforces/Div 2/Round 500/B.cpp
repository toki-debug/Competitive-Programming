//Arissa Yoshida
//B. And - https://codeforces.com/contest/1013/problem/B

#include <bits/stdc++.h>
 
using namespace std;
#define MAXN 998244353
typedef long long int ll;
 
int main() {
    ll n,x;
    cin >>n >> x;
    vector<ll>v;
    vector<ll>v2;
    for(ll i=0;i<n;i++){
        ll a;
        cin >> a;
        v.push_back(a);
        v2.push_back(a);
    }
    sort(v.begin(),v.end());
    
    for(ll i=1;i<n;i++){
        if(v[i]==v[i-1]){
            cout << 0 << endl;
            return 0;
        }
    }
    sort(v2.begin(),v2.end());
    
    for(ll i=0;i<n;i++){
        
            v2[i]= v2[i]&x;
            if(binary_search(v.begin(),v.end()-(n-i),v2[i])){
                cout << 1 << endl;
                return 0;
            }
        
    }
    sort(v2.begin(),v2.end());
    for(ll i=1;i<n;i++){
        if(v2[i]==v2[i-1]){
            cout << 2 << endl;
            return 0;
        }
    }
     
    cout << -1 << endl;
 
    return 0;
}
