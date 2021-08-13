//Arissa Yoshida
//A. Infinite Sequence - https://codeforces.com/contest/622/problem/A

#include<bits/stdc++.h>
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main()
{
    ll n;
    cin >> n;
    ll i=0,j=0;
    while(i<n){
        j++;
        i+=j;
    }
    i-=j;
    n-=i;
    cout << n << endl;
    

    return 0;
}
