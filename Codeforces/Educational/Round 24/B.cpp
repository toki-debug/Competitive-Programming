//Arissa Yoshida
//B. Permutation Game - https://codeforces.com/contest/818/problem/B
 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int>v(n+1,0);
    
    set<int>::iterator itr;
    set<int>v2;
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        v2.insert(i);
       
    }
 
    int a;
    vector<int>v1;
    for(int i=0;i<m;i++){
        cin >> a;
        v1.push_back(a);
    }
    int f=0;
 
    for(int i=0;i<m-1;i++){
        if(v1[i]>v1[i+1]){
            a = n-v1[i]+v1[i+1];
        }else{
            a = (abs((v1[i])-v1[i+1]));
        }
        if(a==0){
            a = n;
        }
        
        if(v[v1[i]]!=0 && v[v1[i]]!=a){
            f=1;
            break;
        }   
        v[v1[i]] = a;
        
        if(binary_search(v2.begin(),v2.end(),a)){
            v2.erase(a);
        }
        
    }
    itr = v2.begin();
    
        for(int i=1;i<=n;i++){
            if(v[i]==0){
                v[i] = *itr ;
               
                if(itr==v2.end()){
                    f=1;
                    break;
                }
                 itr++;
            }
    mp[v[i]]++;
            if(mp[v[i]]>1){
            f=1;
            break;
        }
        }
    
    if(f){
       
        cout << -1 << endl;
    }else{
        

        for(int i=1;i<=n;i++){
            
                cout << v[i] << " ";
            
            
        }
        cout << endl;
    }
    return 0;
    
}
