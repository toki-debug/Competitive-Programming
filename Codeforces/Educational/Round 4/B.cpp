//Arissa Yoshida
//B. HDD is Outdated Technology - https://codeforces.com/contest/612/problem/B

#include<bits/stdc++.h>
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main()
{
    ll n;
    cin >> n;
    ll vet[n+2];
    for(ll i=1;i<=n;i++){
        ll int a;
        cin >>a;
        vet[a] = i;
    }
    ll sum=0;
    for(ll i=2;i<=n;i++){
        sum+=abs(vet[i]-vet[i-1]);
    }
    cout << sum << endl;

    return 0;
}
