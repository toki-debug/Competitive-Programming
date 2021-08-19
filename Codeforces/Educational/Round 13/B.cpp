// Arissa Yoshida
//B. The Same Calendar - https://codeforces.com/contest/678/problem/B


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll y;
    cin >> y;
    int sum=0;
    ll a = y;
    int flag =0;
    while(1){
         a++;
        if((a%400==0) || (a%4==0 && a%100!=0)){
            sum+=2;
            flag =1;
        }else{
            sum++;
            flag =0;
        }
    if(sum%7==0){
        if(((y%400==0) || (y%4==0 && y%100!=0)) && flag ==0){
            continue;
        }else if(!((y%400==0) || (y%4==0 && y%100!=0)) && flag ==1){
            continue;
        }
            break;
        }
        
       
    }
    cout << a << endl;



}
