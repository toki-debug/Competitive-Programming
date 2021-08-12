//Arissa Yoshida
//B. Queries about less or equal elements - https://codeforces.com/contest/600/problem/B

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long int n,m;
    cin >> n >> m;
    long long int x;
    vector<long long int>a;
    vector<long long int>b;
    for(long int i=0;i<n;i++){
        cin >> x;
        a.push_back(x);
    }

    for(long int i=0;i<m;i++){
        cin >> x;
        b.push_back(x);
    }
    vector<long long int>:: iterator  low;
    sort(a.begin(),a.end());


    for(long int i=0;i<b.size();i++){
        low = upper_bound(a.begin(),a.end(),b[i]);
        x = low - (a.begin());
        while(x>=0 && a[x]>b[i]){
            x--;
        }
        if(x>=n-1){
            x=n-1;
        }
        cout << x+1 << " ";
    }
    cout << endl;

    return 0;
}
