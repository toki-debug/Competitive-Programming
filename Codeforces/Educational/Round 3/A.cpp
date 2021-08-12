//Arissa Yoshida
//A. USB Flash Drives - https://codeforces.com/contest/609/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long int n,m;
    cin >> n >> m;
    vector<long int>a;
    long int x;
    while(n--){
        cin >> x;
        a.push_back(x);
    }
    long int num;
    sort(a.begin(),a.end());
    num = upper_bound(a.begin(),a.end(),m)- a.begin();  
    long int r =0;
    n=0;
    if(num>=a.size()){
        num--;
    }
    while(num>=0 && r<m){
        n++;
        r+=a[num];
        num--;
    }
    cout << n << endl;
    return 0;
}
