//Arissa Yoshida
//A. Curriculum Vitae - https://codeforces.com/contest/846/problem/A

#include <bits/stdc++.h>
#define MAX
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int>v;
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    int maximo =1;
    int val = 0;
    int tdz=0;
    int tdu =0;
    int um=0,zero=0;
    for(int i=0;i<n;i++){
        
        if(v[i]==1){
            tdu++;
        }else{
            tdz++;
        }
        int sum=0;
        val=1;
        if(v[i]==0){
            zero++;
            um=0;
            for(int j=i+1;j<n;j++){
                if(v[j]==1){
                    um++;
                }
                
            }
            sum=zero+um;
            val = max(sum, val);
        }
        maximo = max(maximo, max(tdu,val));
        maximo = max(maximo, tdz);
       
    }  

     cout << maximo  << endl; 
 
   
 
    return 0;
}
