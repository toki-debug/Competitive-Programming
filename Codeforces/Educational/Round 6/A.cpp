//Arissa Yoshida
//A. Professor GukiZ's Robot - https://codeforces.com/contest/620/problem/A

#include<bits/stdc++.h>
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main()
{
    ll x,y,x1,y1;
    cin >> x >> y;
    cin >> x1 >> y1;
    cout << max(abs(x-x1),abs(y-y1)) << endl;

    

    return 0;
}
