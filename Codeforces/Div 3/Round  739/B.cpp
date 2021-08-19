//Arissa Yoshida
//B. Who's Opposite? - https://codeforces.com/contest/1560/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    
 
    while(t--){
        ll a,b,c,m;
        cin >> a >> b >> c;
        m = min(a,b);
        if((c>abs(a-b)*2)|| m >abs(a-b)){
            cout << -1 << endl;
        }else{
            if((c+abs(a-b))%((abs(a-b)*2)) ==0){
                cout << abs(a-b)*2 << endl;
            }else{
                cout << (c+abs(a-b))%((abs(a-b)*2)) << endl;
            }
            
        }
    }
    
 
}
