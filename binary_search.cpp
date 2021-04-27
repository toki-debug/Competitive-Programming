#include <bits/stdc++.h>
using namespace std;

int pesquisa(int ini, int fim, int a,vector<int>v){
   
    while(fim>=0 && ini <=v.size()){
         int meio = (ini+fim)/2;
        cout << ini << " "<< fim << endl; 
    if(v[meio] > a){
        fim = meio - 1;
    }else if(v[meio]<a){
        ini = meio+1;
    }else{
        return meio+1;
    }
    }
    return -1;
}


int main(){
    vector<int>v;
    int a,n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    while(cin >>a){
        if(a==0){
            break;
        }else{
            cout << pesquisa(0,n,a,v) << endl;
        }
    }

    

    return 0;

}