//Arissa Yoshida
//A. The number of positions - https://codeforces.com/contest/124/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    n = n-a;
    n = min(n,b+1);
    cout << n << endl;
    return 0;
}
