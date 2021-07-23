//Arissa Yoshida
//A. Help Vasilisa the Wise 2 - https://codeforces.com/contest/143/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int r1,r2,c1,c2,d1,d2;
    cin >> r1>> r2 >> c1 >> c2 >> d1 >> d2;
    int a,b,c,d,f=0;
    a = min(r1,min(c1,d1))-1;
    while(a>-1){
    b = r1 -a;
    c = c1-a;
    d = d1-a;
    if(r1 == a+b && r2 == c+d && c1 == a+c && c2 ==b+d && d1 ==a+d && d2 ==b+c){
        f=1;
        break;
    }
    a--;
    }
    if(a==b || a==c || a==d || b==c || b ==d || c==d){
        f=0;
    }
    if((a <1|| a>9)||(b <1|| b>9)||(c <1|| c>9)||(d <1|| d>9) || f==0 ){
        cout << -1 << endl;
    }else{
        cout<< a <<" " << b << endl;
        cout << c << " " << d << endl;
    }

    return 0;
}
