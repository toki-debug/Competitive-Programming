//Arissa Yoshida
//C. Infinity Table - https://codeforces.com/contest/1560/problem/C
 
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
        ll a;
        cin>> a;
        ll b=1; 
        ll c=1;
 
        ll d=1;
        while(d<a){
            b+=2;
            d+=b;
            c++;
        }
        ll e = d-(2*c)+2;
        //cout << c <<  " " << e << " " << d <<" " << a<<endl;
        if(e+c>a){
            cout << abs(a-e)+1 << " "<< c << endl;
        }else{
            cout << c << " " << abs(d-a)+1<< endl;
        }
 
        
 
    }
 
}
