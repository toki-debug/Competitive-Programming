// Arissa Yoshida
//A. Gabriel and Caterpillar - https://codeforces.com/contest/652/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
    ll h1,h2;
    ll a,b;
    cin >> h1 >> h2 >> a >> b;
    double d=0;
    ll dist = h2-h1;
    if(8*a<h2-h1 && (a*12)<=b*12){
        cout << -1 << endl;
        return 0;
    }else{
        if(8*a>=dist){
            cout << 0 << endl;
            return 0;
        }
        dist-=(8*a);
        d = (a*12) -(b*12);
        double r = double(dist)/d;
        cout << ceil(r)<< endl;

        
    }
    return 0;
}

