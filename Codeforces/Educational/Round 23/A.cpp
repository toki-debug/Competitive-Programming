//Arissa Yoshida
//A. Treasure Hunt - https://codeforces.com/contest/817/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x,y,x1,y1;
    cin >> x >> y >> x1 >> y1;
    int a,b;
    cin >> a >> b;
    x = abs(x1-x);
    y = abs(y1-y);
    if(x%a!=0 || y%b!=0){
        cout << "NO" << endl;
    }else if((x/a)%2==(y/b)%2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
    
}
