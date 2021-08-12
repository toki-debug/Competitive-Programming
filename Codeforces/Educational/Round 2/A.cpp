//Arissa Yoshida
//A. Extract Numbers - https://codeforces.com/contest/600/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
  string a;
  cin >> a;
  
  vector<string>s;
    string b="";
    int k=0;
    for(long int i=0;i<a.size();i++){
        
        if(a[i]==',' || a[i]==';'){
            s.push_back(b);
            b="";
        }else{
            b+=a[i];
        }
        
    }
    s.push_back(b);
    vector<string>pal;
    vector<string>numer;
    long int num =0;
    
    for(long int i=0;i<s.size();i++){
        long int f=0;
       for(long int j=0;j<s[i].size();j++){
           if(s[i].size()>1 && s[i][0]=='0'){
              num=0;
               break;
           }
           if(s[i][j]>='0' && s[i][j]<='9'){
               num=1;
               f =1;
           }else{
               num=0;
               break;
           }
       }
       if(num && !s[i].empty()){
               numer.push_back(s[i]);
       }else{
           pal.push_back(s[i]);
       }
    }

    char z = '"';
    if(numer.empty()){
        cout << '-' ;
    }else{
        cout << z; 
        for(long int i=0;i<numer.size();i++){
            if(i==0){
                cout << numer[i];
            }else{
                cout << ","<<numer[i];
            }
        }
        cout << z; 
    }
    cout << endl;
    if(pal.empty()){
        cout << '-';
    }else{
        cout << z;
        for(long int i=0;i<pal.size();i++){
            if(i==0){
                cout << pal[i];
            }else{
                cout << ","<<pal[i];
            }
        }
        cout << z;
    }
    cout << endl;
  
    return 0;
}
