//Arissa Yoshida
//A. Dreamoon and Stairs - https://codeforces.com/contest/476/problem/A

#include<bits/stdc++.h>
using namespace std;
#define MAXN 150

int main(){
    int n,m;
    cin >> n >> m;
    if(m>n){
        cout << -1 << endl;
    }else{
        int k=0;
        if(n%2!=0){
            n+=1;
        }
        k = n/2;
        if(k%m==0){
            cout << k << endl;
        }else{
            cout << (k+(m-(k%m))) << endl;
        }
       
    }
    return 0;
}
