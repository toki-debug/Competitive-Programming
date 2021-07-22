//Arissa Yoshida
//A. Lucky Division - https://codeforces.com/contest/122/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int flag =0;
    int arr[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0;i<14;i++){
        if(x%arr[i]==0){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout <<  "NO" << endl;
    }
    return 0;
}
