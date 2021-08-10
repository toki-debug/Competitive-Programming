//Arissa Yoshida
//B. Queries on a String - https://codeforces.com/contest/598/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    char c;
    string t;
    for(int i=0;i<n;i++){
        int a,b,k;
        cin >> a >> b >> k;
        t = "";
        for(int j=0;j<=abs(b-a);j++){
            t+=s[j+a-1];
        }
        int z=0;
        int deb;
        for(int j=a-1;j<b;j++){
            
            deb = ((z+k)%(abs(b-a)+1));
            s[j+deb-z] = t[z]; 
            z++;
        }
        
    }
    cout << s << endl;
    return 0;
}
