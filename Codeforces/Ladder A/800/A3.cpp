//Arissa Yoshida
//A. Sleuth - https://codeforces.com/contest/49/problem/A

#include <bits/stdc++.h>
using namespace std;
#define MAXN  99999999
int main()
{
    string a;
    getline(cin,a);
    char b;
    for(int i=0;i<a.size();i++){
        if((a[i]>='A' && a[i]<='Z')||(a[i]>='a' && a[i]<='z')){
            b=a[i];
            if(a[i]>='A' && a[i]<='Z'){
               b=a[i] +('a'-'Z'+25);
            }
        }
    }

    if(b=='a' || b=='e' || b=='i' || b=='o' || b =='u' || b== 'y'){
                cout << "YES" << endl;
            }else{
                cout <<"NO" << endl;
            }

  return 0;
}
