//Arissa Yoshida
//B. Flag of Berland -  https://codeforces.com/contest/837/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string s[100];
int n,m;
set<char>rgb;
bool verifica(){
    //Horizontal
    if(n%3==0){
    char c = s[0][0];
    int f=1;
    rgb.insert(c);
    int i;
    int j=0;
    for( i=0;i<n/3;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]!=c){
                f=0;
                break;
            }
        }
        
    }
    if(f){
    c = s[i][0];
    rgb.insert(c);
    for( i;i<n/3*2;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]!=c){
                f=0;
               break;
            }
        }
        
    }
    }
    if(f){
    c = s[i][0];
    rgb.insert(c);
    for( i;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]!=c){
                f=0;
                break;
            }
        }
        
    }
    }
    if(f){
        return true;
    }
    
    }

    //Vertical
    if(m%3==0){
    char c = s[0][0];
    rgb.insert(c);
    int i;
    int j=0;
    int f =1;
    for( i=0;i<m/3;i++){
        for(int j=0;j<n;j++){
            if(s[j][i]!=c){
                f=0;
                break;
            }
        }
        
    }
    if(f){
    c = s[0][i];
    rgb.insert(c);
    for( i;i<m/3*2;i++){
        for(int j=0;j<n;j++){
            if(s[j][i]!=c){
                f=0;
                break;
            }
        }
        
    }
    }
    if(f){
    c = s[0][i];
    rgb.insert(c);
    for( i;i<m;i++){
        for(int j=0;j<n;j++){
            if(s[j][i]!=c){
                f=0;
                break;
            }
        }
        
    }
    }
    if(f){
        return true;
    }
    
    }
    return false;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    if(verifica() && rgb.size()==3){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
   
    return 0;
}
