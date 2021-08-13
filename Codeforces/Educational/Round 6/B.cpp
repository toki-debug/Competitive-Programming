//Arissa Yoshida
//B - Grandfather Dovlet’s calculator - https://codeforces.com/contest/620/problem/B
#include<bits/stdc++.h>
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main()
{
    ll a,b;
    cin >> a >> b;
    int num[10] = {6,2,5,5,4,5,6,3,7,6};
    string s;
    int  sum=0;
    for(int i=a;i<=b;i++){
        s = to_string(i);
        for(int j=0;j<s.size();j++){
            sum+=num[s[j]-'0'];
        }
    }
    cout << sum << endl;

    return 0;
}


