//Arissa Yoshida
//A. Appleman and Easy Task - https://codeforces.com/contest/462/problem/A

#include<bits/stdc++.h>
using namespace std;
#define MAXN 150

int verifica(int n, char vet[MAXN][MAXN],int i,int j){
    int sum =0;
    if(i-1>=0){
        if(vet[i-1][j]=='o'){
            sum++;
        }
    }
    if(i+1<n){
        if(vet[i+1][j]=='o'){
            sum++;
        }
    }
    if(j-1>=0){
        if(vet[i][j-1]=='o'){
            sum++;
        }
    }
    if(j+1<n){
        if(vet[i][j+1]=='o'){
            sum++;
        }
    }
    
    if(sum%2==0){
        return 1;
    }
    
    return 0;

}


int main(){
    int n;
    cin >> n;
    char vet[MAXN][MAXN];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> vet[i][j];
        }
    }
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!verifica(n,vet,i,j)){
                flag =1;
                break;
            }
        }
    }
    if(flag){
        cout << "NO" << endl;
    } else{
        cout << "YES" << endl;
    }

    return 0;
}
