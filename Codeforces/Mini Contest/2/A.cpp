//Arissa Yoshida
//A. Helping Fill Bates - https://vjudge.net/problem/UVA-10567/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<char,vector<int>>v;
    set<char>p;
    set<char>:: iterator itr;
    map<char,int>ver;
    string a;
    cin >> a;
    string b =a;
    for(int i=0;i<a.size();i++){
        v[a[i]].push_back(i);
        p.insert(a[i]);
        ver[a[i]]=0;
    }
    int f=0;
    int n;
    cin >> n;
    int t=0;
    int minimo=99999999, maximo=0;
    for(int i=0;i<n;i++){
        cin >> a;
        for(itr =p.begin();itr!=p.end();++itr){
            ver[*itr]=0;
        }
        minimo = 0;
        int ant=-1;
       int minimo=99999999, maximo=0;
        for(int j=0;j<a.size();j++){
            if(!v[a[j]].empty() && v[a[j]].size()>ver[a[j]]){
        
                
                if(ant>v[a[j]][ver[a[j]]]){
                    int pos=0;
                    pos = upper_bound(v[a[j]].begin(),v[a[j]].end(),ant)-v[a[j]].begin();
                    ver[a[j]] =pos;
                    if(ant>v[a[j]][ver[a[j]]]){
                        f=1;break;
                    }
                    
                }
                minimo =min(minimo, v[a[j]][ver[a[j]]]);
                maximo =max(maximo, v[a[j]][ver[a[j]]]);
                ant = v[a[j]][ver[a[j]]]; 
                ver[a[j]]++;
                f=0;
            }else{
                f=1;
                break;
            }
        }
        if(f){
            cout << "Not matched" << endl;
        }else{
            cout << "Matched " << minimo << " " << maximo << endl;
        }
    }

}
