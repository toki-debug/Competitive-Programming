//Arissa Yoshida
//https://vjudge.net/problem/EOlymp-419

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
    ll a,b,c;
   while(cin >> a >> b){
       cout << a << " " << b << " ";
    if(a>b) swap(a,b);
    ll maximo = 0;
    map<ll,ll>mp;
     
    for(int i=b;i>=a;i--){
        ll cycle =0;
        c = i;
        vector<ll>v;
        while(c>0){
            cycle++;
            
            if(mp[c]){
                cycle--;
               cycle+=mp[c];
               break;
            }
            v.push_back(c);
            if(c==1)break;
            if(c%2){
                c = c*3 +1;
            }else{
                c/=2;
            }
        }
        
        maximo = max(maximo, cycle);

        for(int i=0;i<v.size();i++){
            mp[v[i]] = cycle;
            cycle--;
        }
        
    }
   cout << maximo << "\n";
   }

    return 0;
}