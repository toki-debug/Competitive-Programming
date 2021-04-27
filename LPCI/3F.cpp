//Arissa Yoshida 04/2021
//https://www.e-olymp.com/en/problems/9016

#include <bits/stdc++.h>
using namespace std;


int main(){
  
  long int n,q;
  
  vector<long int>v;
  cin >> n >> q;
  long int a;
  for(long int i=0;i<n;i++){
    cin >> a;
    v.push_back(a);
  }
  for(long int i=0;i<q;i++){
    cin >> a;
    if(binary_search(v.begin(),v.end(),a)){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }


    return 0;
}

