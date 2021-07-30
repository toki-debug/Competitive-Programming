//Arissa Yoshida
//A. Comparing Strings - https://codeforces.com/contest/186/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    vector<int>v(27,0);
    for(int i=0;i<a.size();i++){
        v[a[i]-'a']++;
    }
    for(int i=0;i<b.size();i++){
        v[b[i]-'a']--;
    }
    int flag =0;
    for(int i=0;i<26;i++){
        if(v[i]!=0){
            flag =1;
            break;
        }
    }
    if(flag){
        cout << "NO" << endl;
    }else{
        int sum=0;
        for(int i=0;i<b.size();i++){
            if(a[i]!=b[i]){
                sum++;
            }
        }
       if(sum==2){
           cout << "YES"  << endl;
       }else
       {
           cout << "NO" << endl;
       }
    }
    
    return 0;
}
