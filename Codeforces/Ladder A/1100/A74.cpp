//Arissa Yoshida
//A. Testing Pants for Sadness - https://codeforces.com/contest/103/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin  >> n;
    long long int a;
    long long int r=0;
    
    for(int i=0;i<n;i++){
        cin >> a;
        r+=a;
        if(a!=1){
        r+=(i*(a-1));
        }
        
    }
    cout << r << endl;
    
    return 0;
}
