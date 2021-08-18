//Arissa Yoshida
//B. New Skateboard	GNU - https://codeforces.com/contest/628/problem/B 

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
    string s;
    cin >>s;
    ll num=0;
    ll sum=0;
    for(ll i=1;i<s.size();i++){
        ll a,b;
        a = (s[i-1]-'0')*10;
        b = s[i]-'0';
        num = a+b;
        if(num%4==0){
            sum+=i;
        }
        if((s[i]-'0')%4==0){
            sum++;
        }
    }
    if((s[0]-'0')%4==0){
        sum++;
    }    
    cout << sum << endl;

}

