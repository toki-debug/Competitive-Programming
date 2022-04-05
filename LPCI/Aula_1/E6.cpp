//Arissa Yoshida
//https://codeforces.com/problemset/problem/339/A

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
    cin >> s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    char c = '1';
    for(int i=0;i<s.size();i++){
        if(mp[c]){
            cout << c;
            mp[c]--;
            if(mp['+']){cout << "+";mp['+']--;}
        }else{
            c++;
            i--;
            if(c==4){
                break;
            } 
        }
    }
    cout << "\n";
    return 0;
}   