//A. Buses Between Cities - https://codeforces.com/contest/665/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,ta;
    int b,tb;
    int h,m;
    cin >> a >> ta;
    cin >> b >> tb;
    char c;
    cin >> h >> c >> m;
    h = (h*60)+m;
    m = h+ta;
    int k = (23*60)+59;
    int bb=5*60;
    int cont=0;
 
    while(bb<=k){
        if((bb+tb>h && (bb)<m)){
            cont++;
        }
        bb+=b;
    }
    cout << cont << endl;
 
}
