//Arissa Yoshida
//B. Powers of Two - https://codeforces.com/contest/702/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<ll>v;
    ll z;
    for(int i=0;i<=31;i++){
        z=1;
        for(int j=0;j<i;j++){
            z*=2;
        }
        v.push_back(z);
        
    }
    int n;
    cin >> n;
    ll a;
    vector<ll>v1;
    map<ll,ll>b;

    for(int i=0;i<n;i++){
        cin >> a;
        v1.push_back(a);
        b[a]++;
    }
    ll sum=0;
    sort(v1.begin(),v1.end());
    for(int j=0;j<v.size();j++){
    for(int i=0;i<n;i++){
         if(b[v[j]-v1[i]]){
             sum+=b[v[j]-v1[i]];
             if(v[j]-v1[i]==v1[i]){
                 sum--;
             }
         }
       }
    }
    cout << sum/2 << endl;
    return 0;



}
