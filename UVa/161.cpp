// Arissa Yoshida
//161. Traffic Lights - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=97
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long int ll;

int main() {
  /*ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);*/
  int a,b,c;
  
  int cont=0;
  vector<int>v;
  int ini =18000;
  while(cin >> a){
    
    
    if(cont==2){
      break;
    }
    if(a==0 && v.empty()){
      cont++;
    }else if(a==0){
      int flag =0;
      int i=0;
      for(i=ini;i<=18000;i++){
        
        for(int j=0;j<v.size();j++){
          int val=0;
          val = i%v[j];
          if(val<(v[j]/2)-5){
            flag++;
          }
        }
        if(flag==v.size()){
          break;
        }else{
          flag =0;
        }
      }
      if(!flag){
        cout << "Signals fail to synchronise in 5 hours" << endl;
      }else{
        if(i<3600){
          cout << "00:";
        }else{
          if(i/3600 <=9){
          cout << "0";
          }
          cout << i/3600 << ":";
          i%=3600;
        }
        if(i<60){
          cout << "00:";
        }else{
          if(i/60 <=9){
          cout << "0";
          }
          cout << i/60 << ":";
          i%=60;
        }
        if(i<60){
          if(i <=9){
          cout << "0";
           }
        
          cout << i << endl;
        }
        

      }
      v.erase(v.begin(),v.end());
      ini =18000;
    }else{
      cont=0;
      
      v.push_back(a*2);
      ini = min(ini,a*2);
    }
    
  }
  

  return 0;
}
