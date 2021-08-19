//Arissa Yoshida
//A. Dislike of Threes - https://codeforces.com/contest/1560/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
bool verifica(int x){
   string a;
   if(x%3==0){
       return false;
   }
   a = to_string(x);
   if(a[a.size()-1]=='3'){
       return false;
   }
    return true;
}
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int k;
    int n=0;
    int a=0;
    vector<int>v;
    v.push_back(0);
    while(n<1000){
        a++;
        if(verifica(a)){
            v.push_back(a);
            n++; 
        }
    }
 
    while(t--){
        cin >> k;
        cout << v[k] << endl;
    }
    
 
}
