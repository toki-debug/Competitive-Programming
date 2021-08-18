// Arissa Yoshida
//B. Seating On Bus - https://codeforces.com/contest/660/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int>v;
    vector<int>v2;
    int a;
    int i=0;
    for(i=1;i<=2*n;i++){
        if(i>m){
            break;
        }
        v.push_back(i);
    }
    for(int j=i;j<=m;j++){
        v2.push_back(j);
    }

    for(i=0;i<m;i++){
        
        if(i<v2.size()){
            cout << v2[i] << " ";
        }
        if(i<v.size()){
            cout << v[i] << " ";
        }
        if(i>=v.size() && i>=v2.size()){
            break;
        }
        
    }
    cout << endl;

}
