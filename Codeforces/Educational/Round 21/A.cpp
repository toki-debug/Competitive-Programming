// Arissa Yoshida
//A. Lucky Year - https://codeforces.com/contest/808/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int num= stoi(s);
    int d = s[0]-'0';
    int r = (d+1)* pow(10,s.size()-1);
    cout << r-num << endl;
    return 0;
}
