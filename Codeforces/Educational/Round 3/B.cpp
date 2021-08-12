//Arissa Yoshida
//B. The Best Gifts - https://codeforces.com/contest/609/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long int l;
typedef long long int ll;

int main(){
    l n,m,a;
    cin >> n >> m;
    vector<l>v(m+1,0);
    for(l i=0;i<n;i++){
        cin >> a;
        v[a]++;
    }
    l r=0;
    for(l i=1;i<=m;i++){
        n-=v[i];
        r+=(v[i]*(n));
    }
    cout << r << endl;
    return 0;
}
