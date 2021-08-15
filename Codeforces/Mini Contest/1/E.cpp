//Arissa Yoshida
//E. Party - https://vjudge.net/problem/CodeForces-115A/origin
#include<bits/stdc++.h>
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
l n;
int vet[3000];
int z=0;
int pai(int f){
    int i=f;
    
    //Conta quantos superiores ele tem
    while(i!=vet[i]){
        i = vet[i];
        z++;
    }

    return z;

}

int main()
{
    cin >> n;
    int a;
    for(int i=1;i<=n;i++){
        cin >> a;
        if(a==-1){
            vet[i]=i;
        }else{
            vet[i]=a;
        }

    }
    int maximo=0;
    for(int i=1;i<=n;i++){
        z=0;
        maximo = max(maximo, pai(i));

    
    }
    cout << maximo+1 << endl;

   
    
    return 0;
}
