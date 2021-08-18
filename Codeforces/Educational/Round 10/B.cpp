// Arissa Yoshida

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
    ll n;
    cin >> n;
    ll a;
    
    vector<ll>v;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);    
    }
    sort(v.begin(),v.end());
    for(int i=2;i<n;i+=2){
        swap(v[i],v[i-1]);
    }
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    

    return 0;
}

