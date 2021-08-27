//Toki & Xilsu
//D. Diane - https://codeforces.com/contest/1554/problem/D
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    ll t;
 
    cin >> t;
 
    while(t--){
        ll n;
 
        cin >> n;
 
        string res;
 
        if(n == 1)
            res = "a";
        else if(n == 2)
            res = "ab";
        else if(n == 3)
            res = "abc";
        else{
            ll a = n / 2, b = a - 1;
 
            for(ll i = 0; i < a; i++)
                res += 'a';
 
            if(n % 2 == 0)
                res += 'b';
            else
                res += "bc";
 
            for(ll i = 0; i < b; i++)
                res += 'a';
        }
 
        cout << res << "\n";
    }
 
    return 0;
}
