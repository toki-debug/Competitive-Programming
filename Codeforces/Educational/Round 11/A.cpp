// Arissa Yoshida
//A. Co-prime Array - https://codeforces.com/contest/660/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>> n;
    int a;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }    
    int num=0;
    for(int i=1;i<n;i++){
        if(__gcd(v[i-1], v[i])!=1){
            num++;
        }
    }
    cout << num << endl;
    for(int i=1;i<n;i++){
        cout << v[i-1] << " ";
        if(__gcd(v[i-1], v[i])!=1){
            cout << 1 << " ";
        }
    }
    cout << v[n-1] << endl;

}
