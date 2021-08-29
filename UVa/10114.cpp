//Arissa Yoshida
//10114 - Loansome Car Buyer - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1055
#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;
 
int main() {
    double n;
    double a,b;
    double c;

    
    while(cin >> n >> a >> b >> c){
        if(n<0){
            break;
        }
        map<int,double>mp;
        for(int i=0;i<c;i++){
            int k;
            double l;
            cin >> k >> l;
            mp[k] = l;
        }
        double ant = mp[0];
        double suma=0;
        double sum =b/n;
        int i =0;
        double sumc =(a+b);
        
               
        for(i=0;i<=n+1;i++){
            if(mp[i]){
                ant = mp[i];
            }
            
            sumc = sumc*(1-ant);
        
            if(b-suma<=sumc){
                break;
            }
            suma+=sum;
            
            
        }
        
        if(i==1){
            cout << i << " month" << endl;
        }else{
            cout << i << " months" << endl;
        }
    }


  
}
