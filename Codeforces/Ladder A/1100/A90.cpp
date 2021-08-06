//Arissa Yoshida
//A. The Artful Expedient - https://codeforces.com/contest/869/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long int>k;
    vector<long int>l;
    vector<long int>todos;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        k.push_back(a);
        todos.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        l.push_back(a);
        todos.push_back(a);
    }
    sort(todos.begin(),todos.end());
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(binary_search(todos.begin(),todos.end(),k[i]^l[j])){
                sum++;
            }
        }
    } 
    
    if(sum%2==0){
        cout << "Karen" << endl;
    }else{
        cout <<  "Koyomi" << endl;
    }
    return 0;
}
