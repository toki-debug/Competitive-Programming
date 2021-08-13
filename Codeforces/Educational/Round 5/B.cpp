//Arissa Yoshida
//B. Dinner with Emma - https://codeforces.com/contest/616/problem/B

#include<bits/stdc++.h>
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main()
{
   int n,m;
   cin >> n >> m;
   ll vet[n+2][m+2];
    ll v[n+2];
   ll sum=0;
   ll maximo=0;
   
    for(int i=0;i<n;i++){
        sum=0;
        ll minn = 9999999999;
        for(int j=0;j<m;j++){
            cin >> vet[i][j];
            minn = min(minn,vet[i][j]);
        }          
        v[i]=minn;
        maximo  = max(v[i],maximo);
    }
    ll minimo = 9999999999;
    for(int i=0;i<n;i++){
        if(maximo ==v[i]){
            for(int j=0;j<m;j++){
                minimo = min(minimo,vet[i][j]);
            }
            break;
        }
    }
    cout << minimo << endl;
    
    

    return 0;
}
