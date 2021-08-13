//Arissa Yoshida
//A. Comparing Two Long Integers - https://codeforces.com/contest/616/problem/A

#include<bits/stdc++.h>
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main()
{
    string a;
    string b;
    cin >>a >>b;
    ll s = max(a.size(),b.size());
    string c="";
    if(a.size()>b.size()){
        for(ll i=0;i<(a.size()-b.size());i++){
            c+="0";
        }
        c+=b;
        b = c;
    }else if(b.size()>a.size()){
        for(ll i=0;i<(b.size()-a.size());i++){
            c+="0";
        }
        c+=a;
        a = c;
    }
    int flag =0;
    for(ll i=0;i<s;i++){
        if(a[i]>b[i]){
            flag =1;
            break;
        }else if(a[i]<b[i]){
             flag =2;
             break;
        }
    }
    if(flag ==0){
        printf("=\n");
    }else if(flag ==1){
        printf(">\n");
    }else{
        printf("<\n");
    }



    return 0;
}
