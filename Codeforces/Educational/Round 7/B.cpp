//Arissa Yoshida
//B - The Time - https://codeforces.com/contest/622/problem/B
#include<bits/stdc++.h>
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main()
{
    int a,b;
    char c;
    int d;

    cin >> a >> c >> b;
    cin >> d;
    int m =0;
    m = b+d;
    m%=60;
    b+=d;
    b/=60;
    int h = a+b;
    h%=24;
    printf("%02d:%02d\n",h,m);

    return 0;
}
