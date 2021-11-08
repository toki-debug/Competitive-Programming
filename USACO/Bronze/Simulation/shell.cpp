//Arissa Yoshida
//Shell Game - http://www.usaco.org/index.php?page=viewproblem2&cpid=891

#include <bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
#define fast_io  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;

void setIO(string s){
    if (!s.empty()){
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO("shell");
  
    int n;
    cin >> n;
    vector<int>pontos(3);
    vector<int>pos(3);
    for(int i=0;i<3;i++){
        pos[i] = i;
    }
    int a,b,g;
    while(n--){
        cin >> a >> b >> g;
        swap(pos[a-1],pos[b-1]);
        pontos[pos[g-1]]++;
    }
    int maximo =0;
    for(int i=0;i<3;i++){
        maximo = max(pontos[i],maximo);
    }
    cout << maximo << endl;
    
}
