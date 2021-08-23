//Arissa Yoshida
//A. k-Factorization - https://codeforces.com/contest/797/problem/A

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin >> n >> k;
    ll f =2;
    ll m = n;
    vector<ll>v;
    ll num =0;
    ll resto =1;
    while(m!=1){
        if(m%f==0){
            v.push_back(f);
            num++;
            
            
            if(num==k){
                resto*=m;
                break;
            }
            m/=f;
        }else{
            f++;
        }
    }
    if(v.size()<k){
        cout << -1 <<endl;
    }else{
        if(resto!=1){
        for(int i=0;i<k-1;i++){
            cout << v[i] << " ";
        }
        cout << resto << endl;
        }else{
            cout << -1 << endl;
        }
    }
}
