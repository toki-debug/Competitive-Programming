//Arissa Yoshida 04/2021
//https://www.spoj.com/problems/AGGRCOW/
//https://www.topcoder.com/thrive/articles/Binary%20Search

#include <bits/stdc++.h>
using namespace std;

int n,c,a;

bool verifica(int mid,vector<int>v){
  int cont =1;
  int prv = v[0];
  for(int i=1;i<n;i++){
    if((v[i] - prv)>=mid){
      prv = v[i];
      cont++;
      if(cont==c){
        return true;
      }
    }    
  }
  return false;

}


int busca(vector<int>v){
  int ini =0;
  int fim = v[n-1];
  int maximo = -1;
  
  while(fim>ini){
   
    int mid = (ini+fim)/2;
     //cout << maximo <<" " << mid<< endl;
    if(verifica(mid,v)){
        if(mid > maximo){
          maximo = mid;
        }
         ini = mid+1;
    }else{
      fim = mid;
    }
  }
  return maximo;

}

int main(){

int t;
cin >> t;

  while(t--){
    
    cin >> n >> c;
    vector<int>v;
    for(int i=0;i<n;i++){
      cin >> a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout << busca(v) << endl;
  }
  return 0;

}

