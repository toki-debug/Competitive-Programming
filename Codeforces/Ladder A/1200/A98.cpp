#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int aa=0,bb=0;
    int dif =0;
    int a,b;
    int imp=0;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(b%2!=0 && b!=a){
                dif++;    
        } 
        if(a%2!=0 && b!=a) {
                dif++;
        }
        
        aa+=a;
        bb+=b;
    }
    int r =0;
    if(aa%2==0 && bb%2==0){
       r=0;
    }else if(aa%2!=0 && bb%2!=0){
        if(dif>0){
            r = 1;
        }else{
            r=-1;
        }
    }else{
        r =-1;
    }
    cout << r << endl;
    return 0;
}
