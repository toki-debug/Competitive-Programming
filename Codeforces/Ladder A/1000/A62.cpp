//Arissa Yoshida
//A. Supercentral Point - https://codeforces.com/contest/165/problem/A

#include<bits/stdc++.h>
using namespace std;
int n;
int vet[205][2];

int verifica(int l){
    int up=0,down=0,left=0,right=0;

    //up
    for(int i=0;i<n;i++){
        if(i!=l){
            if(vet[i][0]==vet[l][0] && vet[i][1] > vet[l][1]){
                up =1;
                break;
            }
        }
    }
    //down
    for(int i=0;i<n;i++){
        if(i!=l){
            if(vet[i][0]==vet[l][0] && vet[i][1] < vet[l][1]){
                down =1;
                 break;
            }
        }
    }
    //left
    for(int i=0;i<n;i++){
        if(i!=l){
            if(vet[i][0]<vet[l][0] && vet[i][1] == vet[l][1]){
                left =1;
                break;
            }
        }
    }
    //right
    for(int i=0;i<n;i++){
        if(i!=l){
            if(vet[i][0]>vet[l][0] && vet[i][1] == vet[l][1]){
                right =1;
                break;
            }
        }
    }
    if(right && left && up && down){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    
    cin >> n;
    
    int ans =0;
    for(int i=0;i<n;i++){
        cin >> vet[i][0] >> vet[i][1];
    }
    for(int i=0;i<n;i++){
       if(verifica(i)){
           ans++;
       }
    }
    cout<< ans << endl;

    return 0;
}
