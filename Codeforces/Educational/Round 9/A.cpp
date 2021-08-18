// Arissa Yoshida
//A. Grandma Laura and Apples - https://codeforces.com/contest/632/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
    int n,p;
    cin >>n >> p;
    string a;
    double ii=0;
    ll num=0;
    vector<string>s;
    for(int i=0;i<n;i++){
        cin >> a;
        s.push_back(a);
    }
    for(int i=s.size()-1;i>=0;i--){
          
        if(s[i]=="halfplus"){
                ii+=0.5;
                num++;
        }
        ii*=2;
          
    }

    cout << ll(ii * p - num * (p/2)) << "\n";

}

