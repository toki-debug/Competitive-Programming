//Arissa Yoshida
//A. Piles With Stones - https://codeforces.com/contest/1013/problem/A

#include <bits/stdc++.h>
 
using namespace std;
#define MAXN 998244353

 
int main() {
    int n;
    cin >> n;
    int a,b=0,c=0;
  
    for(int i=0;i<n;i++){
        cin >> a;
        b+=a;
    }
    int f=1;
 
    for(int j=0;j<n;j++){
        cin >> a;
        c+=a;
    }
    
    if(c<=b){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

 
    return 0;
}
