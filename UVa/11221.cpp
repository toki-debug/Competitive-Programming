// Arissa Yoshida
//11221 - Magic square palindromes - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2162
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;

int main() {
  /*ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);*/
  
  int t;
  cin >> t;
  getchar();
  int caso =0;
  for(caso=1;caso<=t;caso++){
    
    string s;
    getline(cin,s);
    string nova="";
    map<char,int>::iterator itr;
 
    for(int i=0;i<s.size();i++){
      if(s[i]>='a' && s[i]<='z'){
        
        nova+=s[i];
      }
    }
    int n = sqrt(nova.size());
    cout << "Case #" << caso << ":" << endl;
    if(n*n!=nova.size()){
      cout << "No magic :(" << endl;
    }else{
      int flag=1;
      char ss[n+1][n+1];
      int a=0;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          ss[i][j] = nova[a];
          a++;
        }}
      
      a=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(ss[i][j]!=nova[a] ||  ss[j][i]!=nova[a]){
          flag =0;
          break;
        }
        a++;
        }
      }
       a=0;
      for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
        if(ss[i][j]!=nova[a] ||  ss[j][i]!=nova[a]){
          flag =0;
          break;
        }
        a++;
        }
      }
      if(flag){
         cout << n << endl;
      }else{
         cout << "No magic :(" << endl;
      }


      
    }


  }
  return 0;
}
