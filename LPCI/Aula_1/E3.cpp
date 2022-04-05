//Arissa Yoshida
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=617&page=show_problem&problem=1753

#include <bits/stdc++.h>

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

typedef long long ll;

using namespace std;



int main()
{
    fast_io;
    int n;
    cin >> n;
    while(n--){
        ll s,d;
        cin >> s >> d;
        
            ll a = (s+d)/2;
            ll b = s - (s+d)/2;
            if(a+b != s || abs(a-b)!= d || a<0 || b<0) cout << "impossible\n";
            else
            cout << a << " " << b << "\n";
        

    }

    return 0;
}   