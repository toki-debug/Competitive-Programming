//Arissa Yoshida
//A. Binary Protocol - https://codeforces.com/contest/825/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int z=0;
    int num=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            if(z){
                cout<<0;
            }else{
                cout<<num;
            }
            num=0;
            z=1;
        }else{
            z=0;
            num++;
        }
    }
   
        cout <<num;
    
    cout << endl;
    
}
