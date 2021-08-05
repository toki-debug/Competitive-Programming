//Arissa Yoshida
//A. Lala Land and Apple Trees - https://codeforces.com/contest/558/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<pair<int,int>>p;
    vector<pair<int,int>>n;
    int a,b;
    for(int i=0;i<t;i++){
        cin >> a >> b;
        if(a>0){
            p.push_back(make_pair(a,b));
        }else{
            n.push_back(make_pair(a*(-1),b));
        }
    }
    int sum=0;
    sort(p.begin(),p.end());
    sort(n.begin(),n.end());
    if(p.size()>n.size()){
        sum+=p[0].second;
        for(int i=0;i<n.size();i++){
            sum+=p[i+1].second+n[i].second;
        }
    
    }else if(p.size()<n.size()){
        sum+=n[0].second;
        for(int i=0;i<p.size();i++){
            sum+=n[i+1].second+p[i].second;
        }
    }else{
        for(int i=0;i<n.size();i++){
            sum+=n[i].second+p[i].second;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
