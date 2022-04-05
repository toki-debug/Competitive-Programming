//Arissa Yoshida
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3166 


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
    int t;
    cin >> t;
    int k=0;
    while(t--){
        k++;
        string s;
        ll n;
        map<ll, vector<string>>mp;
        ll maximo = 0;
        for(int i=0;i<10;i++){
            cin >> s >> n;  
            maximo = max(maximo, n);
            if(maximo == n){
                mp[maximo].push_back(s);
            } 
        }
        cout << "Case #" << k << ":\n";
        for(int i=0;i<mp[maximo].size();i++){
            cout << mp[maximo][i] << "\n";
        }
        
        
        

    }
    return 0;
}