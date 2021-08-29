#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;
 
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        cout << ((a>=b)? ((a>b)? ">\n" : "=\n") :"<\n");
    }

  
}
