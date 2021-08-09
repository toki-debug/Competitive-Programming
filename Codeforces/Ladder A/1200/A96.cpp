//Arissa Yoshida
//A. Two Bags of Potatoes - https://codeforces.com/contest/239/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int y,k,n;
    cin >> y >> k >>n;
    int f=0;
    long long int x=k -(y%k);
    while((x+y<=n)){
        cout << x << " ";
        f=1;
        x+=k;
    }
    if(f!=1){
        cout << -1 << endl;
    }
    return 0;
}
