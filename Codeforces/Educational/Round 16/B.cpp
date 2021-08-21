// Arissa Yoshida
//B. Optimal Point on a Line - https://codeforces.com/contest/710/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll a;
    vector<ll>v;
    for(int i=0;i<n;i++){
        cin >>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(n%2==0){
        cout << v[(n/2)-1]<< endl;
    }else{
        cout << v[n/2]<< endl;
    }
    


}
