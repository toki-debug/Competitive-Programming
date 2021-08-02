//Arissa Yoshida
//A. Parallelepiped - https://codeforces.com/contest/224/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a1,b1,c1;
    cin >> a1 >> b1 >> c1;
    int a=0,b=1,c=1;
    do{
        a++;
        b = a1/a;
        c = b1/a;
    }while(a*b!=a1 || a*c!=b1 || b*c!=c1);
    cout << a*4+b*4+c*4 << endl;
    
    
    return 0;
}
