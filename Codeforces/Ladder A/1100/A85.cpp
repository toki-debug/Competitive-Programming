//Arissa Yoshida
//A. Giga Tower - https://codeforces.com/contest/488/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int x;
    cin >> x;
    long long int num=x;
    int flag =1;
    while(flag){
        string s;
        num++;
        s = to_string(num);
        sort(s.begin(),s.end());
        if(binary_search(s.begin(),s.end(),'8')){
            flag =0;
            break;
        }
        
    }
    cout << num - x << endl;

    return 0;
}
