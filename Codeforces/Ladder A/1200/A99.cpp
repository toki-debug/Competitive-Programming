//Arissa Yoshida
//A. DZY Loves Chessboard - https://codeforces.com/contest/445/problem/A

#include<bits/stdc++.h>
using namespace std;
 int n,m;
int main(){
   string s;
    cin >> n >> m;
    for(int i=0;i<n;i++){
       cin >> s;
       for(int j=0;j<s.size();j++){
           if(s[j]=='.'){
                if((i+j)&1){
                    s[j] = 'W'; 
                }else{
                    s[j] = 'B';
                }
            }
       }
       cout << s << endl;
    }
   
    
    
   


    return 0;
}
