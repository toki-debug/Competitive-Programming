//Arissa Yoshida
//A. TL - https://codeforces.com/contest/350/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int minimo=200;
    int maximo=0;
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        minimo = min(minimo, a);
        maximo = max(maximo,a);
    }
    int f=1;
    maximo = max(minimo*2,maximo);
    for(int i=0;i<m;i++){
        cin >> a;
        if(a<=maximo){
            f=0;
        }
    }
    if(f){
        cout << maximo << endl;
    }else{
        cout << -1 << endl;
     }
    return 0;
}
