//Arissa Yoshida
//A. Valera and X - https://codeforces.com/contest/404/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char diag;
    char ch[n+1][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            cin >>ch[i][j];
            if(i==j){
                diag = ch[i][j];
            }
        }
    }
    char outro = ch[0][1];
    int flag =0;
    int k=n-1;    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && ch[i][j]!=diag){
                flag =1;
                i=n+1;
                break;
            }else if(ch[i][k]!=diag){
                flag =1;
                 i=n+1;
                break;
            }else if(k!=j && i!=j && ch[i][j]!=outro){
                flag =1;
                 i=n+1;
                break;
            }else if(outro == diag){
                 i=n+1;
                 flag =1;
                 break;
            }
            
        }
        k--;
    }
    if(flag){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }

    return 0;
}
