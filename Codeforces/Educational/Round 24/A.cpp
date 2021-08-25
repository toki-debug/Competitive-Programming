//Arissa Yoshida
//A. Diplomas and Certificates - https://codeforces.com/contest/818/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin >> n >> k;
    ll d,c,nw;
    d = n/(2);
    
    d/=(k+1);
    c = k*d;
    nw = n-(c+d);
    cout << d << " "<< c<< " " << nw;
    return 0;
    
}
