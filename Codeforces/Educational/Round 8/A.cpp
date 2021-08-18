//Arissa Yoshida
//A - Tennis Tournament - https://codeforces.com/contest/628/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
 
int main(){
    int n,b,p;
    cin >> n >> b >> p;
    int m = n;
    int x=0,y=0,a;
    while(m>1){
        a = log2(m);
        x+=a; 
        m-=a;
    }
    x=(x*b)*2+x;
    y=n*p;
    cout << x << " " << y << endl;
 
}
