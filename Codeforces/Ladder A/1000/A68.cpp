//Arissa Yoshida
//A. Valera and Antique Items - https://codeforces.com/contest/441/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,v;
    cin >> n >> v;
    vector<int>r;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        int b;int flag =0;
        for(int i=0;i<a;i++){
            cin >> b;
            if(b<v){
                flag =1;
            }
        }
        if(flag){
            r.push_back(i+1);
        }
    }
    cout << r.size() << endl;
    for(int i=0;i<r.size();i++){
        cout << r[i] <<  " ";
    }
    cout << endl;
    return 0;
}
