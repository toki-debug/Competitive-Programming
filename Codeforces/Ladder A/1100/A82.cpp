//Arissa Yoshida
//A. Rook, Bishop and King - https://codeforces.com/contest/370/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,x,y;
    cin >> a>> b >> x >> y;
    int r=0,c=0,k=0;
    if(a==x && b==y){
        
    }else if(a!=x && b!=y){
        r =2;
        k = max(abs(a-x),abs(b-y));
         if(abs(a-x)==abs(b-y)){
            c = 1; 
        }else if((a+x)%2!=0 && (b+y)%2!=0 || ((a+x)%2==0 && (b+y)%2==0)){
            c =2;
        }
    }else{
        r=1;
        k = abs(a-x)+abs(b-y);
        if((a+x)%2==0 && (b+y)%2==0)
          {
            c = 2;
        }
    }
    cout << r <<" "<< c <<" "<< k << endl;

    return 0;
}
