//Arissa Yoshida
//G. Fox And Two Dots - https://vjudge.net/problem/CodeForces-510B/origin

#include<bits/stdc++.h>
using namespace std;
#define MAXN 51
typedef long int l;
typedef long long int ll;
 



char tab[MAXN][MAXN];
int n,m;
bool vis[MAXN][MAXN];

int f=0;
void dfs(int x, int y,int a,int b,char z){
    if(x > n-1 || x < 0 || y > m-1 || y < 0 || tab[x][y]!=z)
    {return;}
    if(vis[x][y]){
        f=1;
        return;
    }

    vis[x][y] = true;
    
    if(x+1!=a){
        dfs(x+1,y,x,y,z);
    }
    if(x-1!=a){
        dfs(x-1,y,x,y,z);
    }
    if(y+1!=b){
        dfs(x,y+1,x,y,z);
    }
    if(y-1!=b){
        dfs(x,y-1,x,y,z);
    }
   
         
    
    
           
    
}

int main(){

    cin >> n >> m;
   int p,q;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin >> tab[i][j] ;
           vis[i][j]=false;
       }
      
   }
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           if(!vis[i][j]){
               dfs(i,j,-1,-1,tab[i][j]);
               if(f){
                cout << "Yes" << endl;
                return 0;
            }
           }
            
            
       }
      
   }
   
   cout << "No" << endl;


   
    return 0;
}
