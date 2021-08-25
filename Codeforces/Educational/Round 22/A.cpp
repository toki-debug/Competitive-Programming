// Arissa Yoshida
//A. The Contest - https://codeforces.com/contest/813/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n;
    int b;
    int a,sum=0;
    for(int i=0;i<n;i++){
        cin >> a;
        sum+=a;
    }
    cin >> m;
    
    int minimo = 999999;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        if(sum>=a && sum<=b){
            minimo = min(minimo,sum);
        }else if(sum<=a){
            minimo = min(minimo,a);
        }
    }
    if(minimo!=999999){
        cout << minimo << endl;
    }else{
        cout << -1 << endl;
    }

    
    return 0;
}
