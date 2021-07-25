//Arissa Yoshida
//A. Fox and Number Game - https://codeforces.com/contest/389/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>x;

    int a;

    for(int i=0;i<n;i++){
        cin >> a;
        x.push_back(a);
    }
    int z =1;
    do{
        sort(x.begin(),x.end());
        z = (x[n-1]-x[0]);
        if(z!=0){
            x[n-1]-=x[0];
        }
    }while(z!=0);

    cout << x[n-1]*n << endl;

    return 0;
}
