// Arissa Yoshida
//A. King Moves - https://codeforces.com/contest/710/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
 
int ver(int a,int b){
    int sum=0;
    for(int i=-1;i<2;i++){
        for(int j=-1;j<2;j++){
            int c,d;
            c = a+i;
            d = b+j;
            if(c<8 && c>=0 && d<8 && d>=0){
                sum++;
            }
    }
    }
    return sum-1;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int i,j;
    i = s[0]-'a';
    j = s[1]-'1';
 
    j = abs(j-7)%9;
    cout << ver(i,j) << endl;
    return 0;
 
 
 
}
