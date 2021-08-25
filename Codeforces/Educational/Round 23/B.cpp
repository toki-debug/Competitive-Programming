//Arissa Yoshida
//B. Makes And The Product - https://codeforces.com/contest/817/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    map<ll,ll>num;
    vector<ll>v;
    ll a;
    for(ll i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
        num[a]++;
    }
    sort(v.begin(),v.end());
    ll sum =1;
    if(v[0]==v[1] && v[1]==v[2]){

        sum = (num[v[0]]*(num[v[0]]-2)*(num[v[0]]-1))/6;
    }else if(v[0]==v[1]){
        sum = num[v[2]]*(num[v[0]]*(num[v[0]]-1))/2;
    }else if(v[1]==v[2]){
        sum = num[v[0]]*(num[v[1]]*(num[v[1]]-1))/2;
    }else{
        sum = num[v[0]]*num[v[1]]*num[v[2]];
    }

    cout << sum << endl;
    return 0;
    
}
