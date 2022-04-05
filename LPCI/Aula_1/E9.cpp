//Arissa Yoshida
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1130

#include <bits/stdc++.h>

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

typedef long long ll;
using namespace std;

vector<vector<char>> mine;
vector<vector<ll>> res;
int verifica(int x, int y)
{
    ll res =0;
    for(int i=x-1;i<=x+1;i++){
        for(int j=y-1;j<=y+1;j++){
            if(mine[i][j]=='*')
            res++;
        }
    }
    return res;
}

int main()
{

    fast_io;
    ll a,b;
    ll k=0;
    while (cin >> a >> b)
    {
        
        
        
        
        if (a == b && a == 0)
            break;
            if(k)cout << "\n";
            k++;
        mine = vector<vector<char>>(a + 2, vector<char>(b + 2, '.'));
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                cin >> mine[i][j];
            }
        }
        cout << "Field #" << k << ":\n";
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                if(mine[i][j]=='*') cout << "*";
                else cout <<  verifica(i, j);
            }
            cout << "\n";
           
        }
     
    }

    return 0;
}