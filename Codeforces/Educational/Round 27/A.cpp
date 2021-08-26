//Arissa Yoshida
//A. Chess Tourney - https://codeforces.com/contest/845/problem/A
 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a;
    vector<int>v;
    
    for(int i=0;i<2*n;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(v[n-1]>=v[n]){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
   
    return 0;
}
