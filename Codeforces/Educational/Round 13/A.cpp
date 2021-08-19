// Arissa Yoshida
//A. Johny Likes Numbers - https://codeforces.com/contest/678/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin >> n >> k;
    ll a = k-(n%k);

    if(n+a==n){
        cout << n+ k << endl;
    }else{
        cout << n + a << endl;
    }    

}
