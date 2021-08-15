//Arissa Yoshida
//F. The Two Routes - https://vjudge.net/problem/CodeForces-601A/origin

#include<bits/stdc++.h>
using namespace std;
 
typedef long int l;
typedef long long int ll;
 

void add_edge(vector<int>adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

bool BFS(vector<int> adj[], int src, int dest, int v,
         int pred[], int dist[])
{
    
    list<int> queue;
 
    bool visited[v];
 
    
    for (int i = 0; i < v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }
 
    visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);
 

    while (!queue.empty()) {
        int u = queue.front();
        queue.pop_front();
        for (int i = 0; i < adj[u].size(); i++) {
            if (visited[adj[u][i]] == false) {
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);
 
                if (adj[u][i] == dest)
                    return true;
            }
        }
    }
 
    return false;
}

int main()
{
    int n,m;
    cin >> n >> m;
    int a,b;
    vector<int>adj[n];
    vector<int>num[n];
    vector<int>adj2[n];
    for(int i=0;i<m;i++){
        cin >> a >> b; 
        num[a-1].push_back(b-1);
        num[b-1].push_back(a-1);
        add_edge(adj,a-1,b-1);
    }

    for(int i=0;i<n;i++){
        
        sort(num[i].begin(),num[i].end());
        for(int j=0;j<n;j++){
            if(j!=i){
                if(!binary_search(num[i].begin(),num[i].end(),j)){
                add_edge(adj2,i,j);
                }
            }
        }
    }

    


    int dest = n-1;
    int s =0;
    int v = n;

     int pred[v], dist[v];
 
    if (BFS(adj, s, dest, v, pred, dist) == false) {
        cout << -1 << endl;;
        return 0;
    }
    int pred2[v], dist2[v];
    if (BFS(adj2, s, dest, v, pred2, dist2) == false) {
        cout << -1 << endl;;
        return 0;
    }
 
    vector<int> path;
    int crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1) {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }
    vector<int> path2;
    int crawl2 = dest;
    path2.push_back(crawl2);
    while (pred2[crawl2] != -1) {
        path2.push_back(pred2[crawl2]);
        crawl2 = pred2[crawl2];
    }
    int maximo=0;
    maximo = max(dist2[dest],dist[dest]);
    cout <<maximo << endl;
    
    

    return 0;
}



