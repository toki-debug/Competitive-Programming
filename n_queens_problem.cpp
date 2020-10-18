/*
  Arissa Yoshida
  17/10/2020
  Programa feito usando Backtracking.
  n-queens problem
  O problema consiste em encontrar todas as posições possível em que n rainhas conseguem ficar
  posicionadas dentro de uma matriz/tabuleio nxn sem se atacarem, ou seja, não é permitido ter duas
  rainhas em uma mesma linha, coluna ou digonal (principal e secundária).
 */

#include <bits/stdc++.h>

#define MAX 1000
using namespace std;

bool verifica(int v[MAX][MAX],int coluna, int linha,int n){
  //Verifica se existe algum valor na LINHA atual igual a 1 (ou seja com uma rainha)
    for(int i=0;i<n;i++){
        if(v[linha][i]==1){
            return false;
        }
    }
  //Verifica se existe alguma rainha (1) na diagonal principal do lado esquerdo
    for(int i=linha,j = coluna;i>=0 && j>=0;i--,j--){
        if(v[i][j]==1){
            return false;
        }
    }
    //Verifica se existe alguma rainha (1) na diagonal secundaria do lado esquerdo
    for(int i=linha,j = coluna;i<n && j>=0;i++,j--){
        if(v[i][j]==1){
            return false;
        }
    }
    //Importante destacar que não é necessário fazer a verificação da diagonal do lado direito tendo em vista que as rainhas estao sendo colocadas da esquerda para direita.

    return true;

}

int k=0;

void back_track(int v[MAX][MAX],int n,int coluna){
    if(coluna==n){
    k++;
    cout << k << ":"<<endl;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    for(int j=0;j<n;j++){
        if(verifica(v,coluna,j,n)){
            //Se passar da verificação, quer dizer que é possível colocar uma rainha nessa posição
            v[j][coluna] =1;;
            //Continua colocando as outras rainhas, até que seja preenchido todas as possibilidades
            back_track(v, n,coluna + 1);

            v[j][coluna]=0;//Backtracking
        }

    }
}

int main() {
    int n;
    //Valor de n:
    cin >> n;
    //Zerando a matriz nxn que será usada como tabuleiro
    int v[MAX][MAX];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v[i][j]=0;
        }

    }

    //Algoritmo do n-queens problem:
    back_track(v,n,0);


    return 0;
}

