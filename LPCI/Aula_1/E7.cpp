//Arissa Yoshida
//https://atcoder.jp/contests/agc004/tasks/agc004_c

#include <bits/stdc++.h>
 
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
 
typedef long long ll;
using namespace std;
 
vector<vector<char>> red;
vector<vector<char>> blue;
 
bool verifica(int x, int y, bool flag)
{
    if (flag == 1){
        if(red[x-1][y]=='.' && red[x][y-1]=='.'){
            return true;
        }
    }else{
        if(blue[x+1][y]=='.'  && blue[x][y+1]=='.'){
            return true;
        }
    }
    return false;
}
 
int main()
{
    fast_io;
 
    int x, y;
    cin >> x >> y;
    vector<vector<char>> v(x + 1, vector<char>(y + 1));
 
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
 
            cin >> v[i][j];
        }
    }
 
    red = v;
    blue = v;
  
 
 
    for(int i=1;i<x-1;i++){
        for(int j=1;j<y-1;j++){
            if(j%2) red[i][j] = '#';
            else blue[i][j] = '#';
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(i==0){
                cout << "#";
            }else{
                cout << red[i][j];
            }
        }
        cout << "\n";
    }
cout << "\n";
     for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(i==x-1){
                cout << "#";
            }else{
                cout << blue[i][j];
            }
        }
        cout << "\n";
    }
 
    return 0;
}