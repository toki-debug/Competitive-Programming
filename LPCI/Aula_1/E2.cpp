//Arissa Yoshida
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=608&page=show_problem&problem=2899

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
    int t;
    cin >> t;
    int k=0;
    while(t--){
        k++;
        int n;
        cin >> n;
        ll a=0;
        ll maximo =0;
        for(int i=0;i<n;i++){
            cin >> a;
            maximo = max(maximo,a);
        }
        cout << "Case " << k << ": " << maximo << "\n";
       

    }
    return 0;
}