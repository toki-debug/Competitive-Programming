//Arissa Yoshida
//A. The Text Splitting - https://codeforces.com/contest/612/problem/A
#include<bits/stdc++.h>
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    int n,p,q;
    cin >> n >> p >>q;
    string a;
    cin >> a;
    int r=0;
    int x;
    if(p>q){
        x =p;
        p=q;
        q=x;
    }
    x =0;
    //p<q
    int f=0;
    int y;
    while(p*x<=n){
        y=0;
        while(r<n){
            r = p*x + q*y;
            
            if(r==n){
                f=1;
                break;
            }
            y++;
        }
 
 
        if(f){
        
        break;
        }
        r=0;
        x++;
 
    }
    
    if(f){
        cout << x+y << endl;
        int k=0;
        while(x--){
        for(int i=k;i<p+k;i++){
            cout << a[i];
            
        }
        k+=p;
        cout << endl;
        
        }
        while(y--){
        for(int i=k;i<q+k;i++){
            cout << a[i];
            
        }
        k+=q;
        cout << endl;
        }
    }else{
        cout << -1 << endl;
 
 
    }
    return 0;
}
