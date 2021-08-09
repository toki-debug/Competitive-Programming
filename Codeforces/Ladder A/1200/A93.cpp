//Arissa Yoshida
//A. Worms Evolution - https://codeforces.com/contest/31/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,n;
    cin >> n;
    vector<pair<int,int>>v;

    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=2;i<v.size();i++){
        for(int j=0;j<i-1;j++){
            for(int k=j+1;k<i;k++){
                sum = v[j].first+v[k].first;
                if(sum==v[i].first){
                    cout << v[i].second <<  " " << v[k].second << " " << v[j].second << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
