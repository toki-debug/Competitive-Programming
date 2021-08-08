//Arissa Yoshida
//A. Next Test - https://codeforces.com/contest/27/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(3001,0);
    int r=1;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v[a] = 1;
    }
    for(int i=1;i<=3001;i++){
        if(v[i]!=1){
            r = i;
            break;
        }
    }
    
    cout << r << endl;
     
    return 0;
}
