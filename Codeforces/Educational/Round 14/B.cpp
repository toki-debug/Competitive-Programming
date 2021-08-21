// Arissa Yoshida
//B. s-palindrome - https://codeforces.com/contest/691/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string ver ="AHIMOoTUVvWwXxY";
    string s;
    cin >> s;
    string a="",b="";
    int n = s.size();
    int k=0;
    if(n%2!=0){
        
        for(int i=0;i<(n/2);i++){
            a+=s[i];
        }
        for(int j=n/2+1;j<n;j++){
            b+=s[j];
        }
    }else{
        for(int i=0;i<(n/2);i++){
            a+=s[i];
        }
        for(int j=n/2;j<n;j++){
            b+=s[j];
        }
    }
    reverse(b.begin(),b.end());
    if((n%2!=0)){
       for(int j=0;j<ver.size();j++){
           if(ver[j]==s[n/2]){
               k=1;
               break;
           }
           
       }
        if(k!=1){
        cout << "NIE" << endl;
        return 0;
    }
    }
   
    int f=0;
    int v=0;
    for(int i=0;i<n/2;i++){
        v=0;
        if(a[i]=='b' || a[i]=='q' || a[i]=='d' || a[i]=='p'){
                if((a[i]=='b' && b[i]!='d') || (a[i]=='p' && b[i]!='q') || (a[i]=='d' && b[i]!='b') || (a[i]=='q' && b[i]!='p')){
                    f=1;
                    
                }
                v=1;
            }else{
                for(int j=0;j<ver.size();j++){
                if(a[i]==ver[j]){
                if(a[i]!=b[i]){
                    f=1;
                    break;
                }
                v=1;
                }
                    
                
            }
            }
        if(f || v==0){
            cout << "NIE" << endl;
            return 0;
        }
    }
    
    cout << "TAK" << endl;
    return 0;



}
