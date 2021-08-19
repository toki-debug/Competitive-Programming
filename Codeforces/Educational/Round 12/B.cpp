//Arissa Yoshida
//B. Shopping - https://codeforces.com/contest/665/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,k;
    cin >> n >> m >>k;
    int v[1000];
    int a;
    for(int i=1;i<=k;i++){
        cin >>v[i];
    }
    int sum=0;
    int b;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> b;
            int pos =0;
            for(int l=1;l<=k;l++){
                if(v[l]==b){
                    pos =l; 
                    break;
                }
            }
            for(int l=pos;l>1;l--){
                swap(v[l],v[l-1]);
            }
            sum+=pos;
        }
    }
    cout << sum << endl;
 
 
 
}
