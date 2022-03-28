// Arissa Yoshida
//10755 - Garbage Heap - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1696

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    no_tle_pls
    int t;
    cin >> t;
    while(t--){
        
        int a,b,c;
        cin >> a >> b >> c;
        vector<vector<vector<ll>>>mat(a,vector<vector<ll>>(b,vector<ll>(c)));
        vector<vector<vector<ll>>>mat2(a,vector<vector<ll>>(b,vector<ll>(c)));
        bool flag =0;
        ll r;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                for(int k=0;k<c;k++){
                    cin >> mat[i][j][k];
                    if(!flag) r = mat[i][j][k];
                    flag =1;
                    mat2[i][j][k] = mat[i][j][k];
                    if(i>0)mat2[i][j][k]+=mat2[i-1][j][k]; //prefixsum
                    r = max(r,mat[i][j][k]);
                }
            }
        }
       
        for(int i=0;i<a;i++){
            for(int j = i;j<a;j++){
                for(int k=0;k<b;k++){
                     vector<ll>sum(22);           
                    for(int l=k;l<b;l++){
                        ll tc =0;
                        for(int m=0;m<c;m++){
                            sum[m]+=mat2[j][l][m];
                            if(i)sum[m]-=mat2[i-1][l][m];
                            tc+=sum[m];
                            r = max(r,tc);
                            if(tc<0)tc =0;
                        }
                    }
                }
            }
        }
        cout << r << "\n";
        if(t!=0)cout << "\n";


    }
    return 0;
}