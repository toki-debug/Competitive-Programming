//Arissa Yoshida
//http://codeforces.com/problemset/problem/1220/A

#include <bits/stdc++.h>

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

typedef long long ll;

using namespace std;



int main()
{
    fast_io;
    string s;
    int t;
    cin >> t;
    cin >> s;
    int z=0,n=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='n'){
            n++;
        }else if(s[i]=='z'){
            z++;
        }
    }
    for(int i=0;i<n;i++){
        cout << 1 << " ";
    }
    for(int i=0;i<z;i++){
        cout << 0 << " ";
    }
    cout << "\n";
    return 0;
}   