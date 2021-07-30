//Arissa Yoshida
//A. Rank List - https://codeforces.com/contest/166/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n;
    cin >> n >> k;
    int a,b;
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++){
        cin >> a>> b;
        p.push_back(make_pair(-a,b)); 
    }
    sort(p.begin(),p.end());
    int c =0;
    c = count(p.begin(),p.end(),p[k-1]);
    cout << c << endl;
    
    
    return 0;
}
