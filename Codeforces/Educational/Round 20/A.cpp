// Arissa Yoshida
//A. Maximal Binary Matrix - https://codeforces.com/contest/803/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n,k;
    cin >> n >> k;
    int vet[n+1][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            vet[i][j]=0;
    }
    }

    if(k>n*n){
        cout << -1 << endl;
    
    }else{
        int j=0;
        int l=0;
        for(int i=0;i<n;i++){
            j=i;
            while(k>=2 && j<n){
                vet[j][i]=1;
                vet[i][j]=1;
                if(j==i){
                    k-=1;
                }else{
                    k-=2;
                }
                j++;
                
            }
            if(k<2){
                break;
            }
        }
       
            
                for(int i=0;i<n;i++){
                    for(j=0;j<n;j++){
                        if(i==j && vet[i][j]!=1 && k>0){
                            k--;
                            vet[i][j]=1;
                        }
                        cout << vet[i][j] << " ";
                    }
                    cout << endl;
                }
            
        
    }
    return 0;
}
