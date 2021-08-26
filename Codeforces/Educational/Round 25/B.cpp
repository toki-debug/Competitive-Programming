//Arissa Yoshida
//B. Five-In-a-Row - https://codeforces.com/contest/825/problem/B
 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string s[11];
bool verifica(int a,int b){
    int ponto=0;
    int sum=0;
   
    //Horizontal
    
    for(int i=b;i<b+5;i++){
        if(i>9){
            break;
        }
        if(s[a][i]=='X'){
            sum++;
        }else if(s[a][i]=='.' && !ponto){
            sum++;
            ponto=1;
        }else{
            break;
        }
    }
    if(sum==5){
        return true;
    }
    
    
    ponto=0;
    sum=0;
    //Vertical
   
    for(int i=a;i<a+5;i++){
        if(i>9){break;}
        if(s[i][b]=='X'){
            sum++;
        }else if(s[i][b]=='.' && !ponto){
            sum++;
            ponto=1;
        }else{
            break;
        }
    }
    if(sum==5){
        return true;
    }
    


    ponto=0;
    sum=0;
    //Diagonal Principal
    
        int j=b;
    for(int i=a;i<a+5;i++){
        if(i>9 || j>9){
            break;
        }
        if(s[i][j]=='X'){
            sum++;
        }else if(s[i][j]=='.' && !ponto){
            sum++;
            ponto=1;
        }else{
         break;  
        }
        j++;
    }
    if(sum==5){
        return true;
    }
    
    ponto=0;
    sum=0;
    //Diagonal Secundaria
   
        j=b;
    for(int i=a;i<a+5;i++){
        if(i>9 || j<0){
            break;
        }
        if(s[i][j]=='X'){
            sum++;
        }else if(s[i][j]=='.' && !ponto){
            sum++;
            ponto=1;
        }else{
         break;  
        }
        j--;
    }
    if(sum==5){
        return true;
    }
    


    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    for(int i=0;i<10;i++){
        cin >> s[i];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(verifica(i,j)){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
