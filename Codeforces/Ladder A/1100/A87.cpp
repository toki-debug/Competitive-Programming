//Arissa Yoshida
//A. Mike and Fax - https://codeforces.com/contest/548/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >>s;
    int x;
    cin >> x;
    int g =s.size()/x;
    string a="";
    int f=1;
    for(int i=0;i<x;i++){
        for(int j=0;j<g/2;j++){
            if(s[j+i*g]!=s[(i+1)*g-j-1]){
                f=0;
                break;
            }
        }
    }
    
    if(f && s.size()%x==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
