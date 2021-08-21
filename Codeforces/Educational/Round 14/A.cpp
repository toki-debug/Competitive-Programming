// Arissa Yoshida
//A. Fashion in Berland - https://codeforces.com/contest/691/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a;
    int s=0;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a==0){
            s++;
        }
    }
    if(n==1 && s==0){
        cout << "YES" << endl;
    }else if(n>1 && s==1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}
