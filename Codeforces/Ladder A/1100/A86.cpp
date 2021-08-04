//Arissa Yoshida
//A. Vitaliy and Pie - https://codeforces.com/contest/525/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int>alfa(27,0);

    int sum =0;
    for(int i=0;i<s.size();i++){
        int flag =0;
        if(s[i]>='a'){
            alfa[s[i]-'a']++;
        }else{  
            if(alfa[s[i]-'A']!=0){
                alfa[s[i]-'A']--;
            }else{
                sum++;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
