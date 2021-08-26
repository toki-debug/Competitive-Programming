//Arissa Yoshida
//A. The Miracle and the Sleeper - https://codeforces.com/contest/1562/problem/A
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,r;
        cin >> a >> r;
        ll n = r/2;
        n+=1;
        if(n<a){
            cout << r%a << endl;
        }else{
            cout << r%n << endl;
        }
    }
    
    
 
    return 0;
}
