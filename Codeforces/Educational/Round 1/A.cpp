//Arissa Yoshida
//A. Tricky Sum - https://codeforces.com/contest/598/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a;
        cin >> a;
        long int n=0;
        while(pow(2,n)<=a){
            n++;
        }
        if(a==1){
            cout << -1 << endl;
        }else{
           
        
        long long int r;
        r = ((1+a)*a)/2 - 2*(pow(2,n)-1);
    
    cout << r << endl;
        }
    }
    return 0;
}
