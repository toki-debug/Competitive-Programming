//Arissa Yoshida
//A. Array - https://codeforces.com/contest/300/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int>neg;
    stack<int>pos;
    int a;
    int z=0;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a>0){
            pos.push(a);
        }else if(a<0){
            neg.push(a);
        }else{
            z++;
        } 
    }
    cout << 1 << " " << neg.top() << endl;
    neg.pop();
    if(pos.empty()){
        cout << 2 << " " << neg.top();
        neg.pop();
        cout << " " << neg.top() << endl;
        neg.pop();
    }else{
        cout << 1 << " " << pos.top() << endl;
    pos.pop();
    }
    int total = pos.size() + neg.size() + z;
    cout << total;
    while(!pos.empty()){
        cout << " " << pos.top();
        pos.pop();
    }
     while(!neg.empty()){
        cout << " " << neg.top();
        neg.pop();
    }
    while(z--){
        cout << " " << 0;
    }
    cout << endl;

    return 0;
}
