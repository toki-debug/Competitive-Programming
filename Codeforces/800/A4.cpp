//Arissa Yoshida
//A. Translation - https://codeforces.com/contest/41/problem/A

#include <bits/stdc++.h>
using namespace std;
#define MAXN  99999999
int main()
{
    string a,b;
    cin >> a>> b;
    reverse(b.begin(),b.end());
    if(a==b){
        cout << "YES"  << endl;
    }else{
        cout << "NO"  << endl;
    }
 
 
  return 0;
}
