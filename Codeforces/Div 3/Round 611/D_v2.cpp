//Nicolas Gomes
//D. Christmas Trees - https://codeforces.com/contest/1283/problem/D
#include <bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
#define fast_io  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;


int main() {
    // setIO("");
    fast_io
    int n, m;
    cin >> n >> m;
    vector<ll> tree(n);
    for(int i = 0; i < n; i++){
        cin >> tree[i];
    }
    ll mi, ma, cont = 0;
    sort(tree.begin(), tree.end());

    map<ll, bool> vis;

    queue <ll> q;
    vector<ll> res;

    for(int i = 0; i < tree.size(); i++){
        vis[tree[i]] = true;
    }
    for(int i = 0; i < tree.size(); i++){
        if(!vis[tree[i]-1]){
            vis[tree[i]-1] = true;
            q.push(tree[i]-1);
            res.push_back(tree[i]-1);
            cont++;
            if(cont>=m)break;
        }
        if(!vis[tree[i]+1]){
            vis[tree[i]+1] = true;
            q.push(tree[i]+1);
            res.push_back(tree[i]+1);
            cont++;
            if(cont>=m)break;
        }
    }
  
    while(cont<m){
        int x = q.front();
        q.pop();
        vis[x] = true;
        if(!vis[x+1]){
            q.push(x+1);
             vis[x+1] = true;
            res.push_back(x+1);
            cont++;
            if(cont==m)break;
        }
        if(!vis[x-1]){
           vis[x-1] = true;
            q.push(x-1);
            res.push_back(x-1);
            cont++;
            if(cont==m)break;
        }
        
    }
  
    ll p = 0;
    for(int i = 0; i < res.size(); i++){
        int ind = lower_bound(tree.begin(), tree.end(), res[i]) - tree.begin();
        if(ind == 0){
            p += abs(tree[0] - res[i]); 
        }
        else if(ind == tree.size()){
            ind--;
            p += abs(tree[ind] - res[i]); 
        }
        else p += min(abs(tree[ind] - res[i]), abs(tree[ind-1] - res[i]));
    }
    cout << p << "\n";
    for(auto x: res)cout << x << " ";
    cout << "\n";
    
}
