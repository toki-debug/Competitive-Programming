//Arissa Yoshida
//A. Sweet Problem - https://codeforces.com/contest/1263/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    while(x--){
    long long int v[3];
    cin >> v[0] >> v[1] >> v[2];
    long long int r;
        sort(v,v+3);
        if(v[2]>=v[1]+v[0]){
            r= v[1]+v[0];
        }else{
            long long int a=v[2],b=v[1],c=v[0];
            v[2]-=(v[2]-v[1]);
            v[0]-=(v[2]-v[1]);
            v[2]-=(v[1]-v[0]);
            v[1]-=(v[1]-v[0]);
             if(v[0]==1){
                r = a;
            }else{
                r = (a+b+c)/2;
            }
            
        }
        cout << r << endl;
    }
     
    return 0;
}
