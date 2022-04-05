//Arissa Yoshida
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1287

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
    ll n,k;
    while(cin >> n){
        cin >> k;
        ll res=0;
        res+=n;
        for(int i=k;i<=n;i+=k){
            n++;
            res+=1;

        }
        cout << res << "\n";
    }

    return 0;
}   