//Arissa Yoshida
//B. Distances to Zero - https://codeforces.com/contest/803/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<ll>v;
    ll a;

    for(int i=0;i<n;i++){
        cin >> a;
        if(a==0){
            v.push_back(i);
        }
    }
    int pos;
    ll r;
    for(int i=0;i<n;i++){
        pos = lower_bound(v.begin(),v.end(),i)-v.begin();
        if(pos>0){
            r = min(abs(v[pos]-i),abs(v[pos-1]-i));
        }else{
            r = abs(v[pos]-i);
        }
        cout << r << " ";
    }
    cout << endl;
    return 0;
}
