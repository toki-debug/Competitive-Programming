//Arissa Yoshida
//B. Moamen and k-subarrays - https://codeforces.com/contest/1557/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long int n,k;
        cin >> n >> k;
        long int r=0;
        long long int a,c=0;
        int f =0;
        vector<pair<long long int, long long int>>v(n);

        for(long int i=0;i<n;i++){
            cin >> v[i].first;
            v[i].second = i;          
        }
        sort(v.begin(),v.end());
    
        r =1;
        for(long int i=1;i<n;i++){
            if(v[i-1].second +1 != v[i].second){
                r++;
            }
        }
        if(r>k){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}
