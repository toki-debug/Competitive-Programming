//Arissa Yoshida
//A. Laptops - https://codeforces.com/contest/456/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>>x;
    int a,b;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        x.push_back(make_pair(a,b));
    }
    sort(x.begin(),x.end());
    int z=0;
    for(int i=1;i<x.size();i++){
        if(x[i-1].second>x[i].second){
            z=1;
            break;
        }
    }
    if(z){
        cout << "Happy Alex" << endl;
    }else{
        cout << "Poor Alex" << endl;
    }
    return 0;
}
