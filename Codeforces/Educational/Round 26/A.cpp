//Arissa Yoshida
//A. Text Volume - https://codeforces.com/contest/837/problem/A 

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s;
    int c=0;
    int maximo=0;
    while(cin>>s){
        c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                c++;    
            }
        }
        maximo = max(c,maximo);
    }
    cout << maximo << endl;
   
    return 0;
}

