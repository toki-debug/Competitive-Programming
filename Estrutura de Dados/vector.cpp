#include <bits/stdc++.h>
using namespace std;

void show(vector<int>v; int n){
    for(int i=0;i<n;i++){
        cout << v[i] <<" ";
    }
    cout << endl;
}

int main(){
    //Vector são os mesmo que as arrays dinamicas, ele automaticamente reajusta seu tamanho quando um elemento é adicionado ou removido
    int n;
    cin >> n;
    vector<int>v; //Declarando um vector
    vector<int>v2(n,0); //Declarando um vector e iniciando ele de 0 até a posição n-1 com valor 0;
    vector<int>v3 = {1,2,3,4,5};
    //Iterators : São usados para apontar para um determinado endereço de memória
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a); // Salvando valores dentro de um vector começando por 0
    }

    return 0;
}