//Arissa Yoshida 05/2021
//https://codeforces.com/problemset/problem/913/B

#include <bits/stdc++.h>
using namespace std;

#define MAXN 1003

int n;
vector<int>vet[MAXN];
int v[MAXN]={0};
int r[MAXN]={0};

void dfs(int x){
    int p=0;
    for(int i=0;i<vet[x].size();i++){
        p = vet[x][i];
        
        if(v[p]==1){
            
            dfs(p);
        }else{
            r[x]++;
        }
    }

}
int main(){
    cin >> n;
    int a;
    for(int i=2;i<=n;i++){
        cin >> a;
        vet[a].push_back(i);
        v[a]=1;
    }   
    dfs(1);
    int f =0;
    for(int i=1;i<=n;i++){
        if(r[i]<3 && v[i]){
            f=1;
        }
    }

    if(f==1){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}
