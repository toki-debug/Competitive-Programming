// Arissa Yoshida
//454. Anagrams - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=395
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;

int main() {
  /*ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);*/
  int t;
  cin >>t;
  string s;
  getline(cin,s);
  getline(cin,s);
  
  while(t--){
    vector<string>v;
  
    string principal;
    vector<pair<string,string>>a;
    int finish=0;
    while(getline(cin,s)){
      if(s==""){
        break;
      }else{
        principal = s;
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        sort(s.begin(),s.end());
        a.push_back(make_pair(principal,s));
      }
    }
      sort(a.begin(),a.end());
      for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
          if(a[i].second == a[j].second){
            cout << a[i].first << " = " << a[j].first <<endl; 
          }
        }
      }

      if(t!=0){
        cout << endl;
      }
      
    
  }
  return 0;
}
