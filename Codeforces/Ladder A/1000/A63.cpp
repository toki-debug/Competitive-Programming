//Arissa Yoshida
//A. Dragons - https://codeforces.com/contest/230/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin >> s >> n;
    vector<pair<int,int>>x;
    int a,b;
    for(int i=0;i<n;i++){
        cin >>  a>> b;
        x.push_back(make_pair(a,b));
    }
    sort(x.begin(),x.end());
    for(int i=0;i<n;i++){
       if(s>x[i].first){
           s+=x[i].second;
       }else{
           s = -1;
           break;
       }
    }
    if(s==-1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
   

    return 0;
}
