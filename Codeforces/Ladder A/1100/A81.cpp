//Arissa Yoshida
//A. Vasya and Digital Root - https://codeforces.com/contest/355/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int d,k;
    cin >> d >> k;
    if(k==0 && d>1){
        cout << "No solution" << endl;
    }else{
    cout << k;
    for(int i=1;i<d;i++){
        cout << 0;
    }
    }
    cout << endl;
    return 0;
}
