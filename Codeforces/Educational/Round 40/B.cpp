//Arissa Yoshida
//B. String Typing - https://codeforces.com/contest/954/problem/B
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  string s;
  cin >> s;
  string aux="";
  aux+=s[0];
  int minimo=s.size();
  int maximo = 0;
  int l=0;
  int z=0;
  for(int i=1;i<s.size()/2;i++){
    aux+=s[i];
    string view="";
    int f=0;
    for(int j=i+1;j<=s.size()-aux.size();j++){
      l=0;
      for(int k=j;k<j+aux.size();k++){
        view+=s[k];
        if(aux[l]==s[k]){
          l++;
        }else{
          j=s.size();
          break;
        }
      }
      if(l==aux.size()){
        f=1;
        break;
      }
     
    }
    if(f){
      maximo = aux.size();
      z=1;
    }
    
 
   
  }
  cout << maximo + (n-maximo*2)+ z << endl;
 
  
  return 0;
}
