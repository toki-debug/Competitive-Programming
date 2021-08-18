// Arissa Yoshida
//B - Alice, Bob, Two Teams - https://codeforces.com/contest/632/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
    ll n;
    cin >> n;
    vector<ll>a;
    for(ll i=0.;i<n;i++){
        ll b;
        cin >> b;
        a.push_back(b);
    }
    string c;
    cin >> c;
    ll maximo =0;
    ll bb=0;
    for(int i=0;i<c.size();i++){
    if(c[i]=='B'){
        bb+=a[i];
    }
    }
    maximo = bb;
    
    ll b=bb;
    for(int i=0;i<c.size();i++){
        if(c[i]=='A'){
            b+=a[i];
        }else{
            b-=a[i];
        }
        maximo = max(b,maximo);
    }
    b=bb;
    for(int i = c.size()-1;i>=0;i--){
        if(c[i]=='A'){
            b+=a[i];
        }else{
            b-=a[i];
        }
        maximo = max(b,maximo);
    }
    cout << maximo << endl;

}

