//Arissa Yoshida
//A. Alyona and Numbers - https://codeforces.com/contest/682/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    double n,m;
    cin >> n >> m;
    long long int sum=0;
    for(int i=1;i<=n;i++){
        int a=i%5;
        double x=(5-a);
        sum+=ceil((m+1-x)/5);
        
     }
     cout << sum << endl;
    return 0;
}
