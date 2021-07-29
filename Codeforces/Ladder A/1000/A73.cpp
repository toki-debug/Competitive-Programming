//Arissa Yoshida
//A. Broken Keyboard - https://codeforces.com/contest/1251/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   for(int i=0;i<n;i++){
       string s;
       cin >> s;
       vector<int>alf(26,0);
       for(int i=0;i<s.size();i++){
           if(s[i]!=s[i+1]){
               alf[s[i]-'a'] =1;
           }else{
               i+=1;
           }
       }
       char c;
       for(int i=0;i<26;i++){
           if(alf[i]==1){
               c = i+'a';
               cout << c;
           }
       }
       cout << endl;
   }
    return 0;
}
