//Arissa Yoshida
//A. Counterexample - https://codeforces.com/contest/483/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int l,r;
    cin >> l >> r;
   
        r = r-l;
        if(r<2 ||(r==2) &&(l%2==1)){ 
           cout << "-1";
        }else{
            l = l + l%2;
            cout << l <<" "<< l+1 << " "<<l+2;
        }
    cout << endl;
    return 0;
}
