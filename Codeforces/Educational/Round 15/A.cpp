// Arissa Yoshida
//A. Maximum Increase - https://codeforces.com/contest/702/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a=0;
    int b;
    int sum=1;
    int maximo =0;
    for(int i=0;i<n;i++){
        cin >> a;
        if(i!=0){
            if(a>b){
                sum++;
            }else{
                sum=1;
            }
        }
        maximo = max(maximo, sum);
        b=a;
    }
    cout << maximo << endl;
    return 0;

}
