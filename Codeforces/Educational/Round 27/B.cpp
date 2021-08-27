//Arissa Yoshida
//B. Luba And The Ticket - https://codeforces.com/contest/845/problem/B

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
  string s;
  cin >> s;
  vector<int>a;
  vector<int>b;
  int suma=0;
  int sumb=0;
  for(int i=0;i<3;i++){
    a.push_back(s[i]-'0');
    suma+=a[i];
    b.push_back(s[i+3]-'0');
    sumb+=b[i];
  }
  int f=0;
  if(suma>sumb){
    f=1;
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  int j=0;
  int i=0;
  int c1;
  int c2;
  int minimo =0;
  int sum=0;
  if(f){
    i=2;
    j=0;
    while(suma>sumb){
      c1 = suma-a[i];
      c2 = sumb-b[j]+9;
      if(abs(c1-suma)>abs(c2-sumb) && i>=0){
        suma = c1;
        i--;
      }else if(j<3){
        sumb = c2;
        j++;
      }
      minimo++;
    }
  }else{
    j=2;
    i=0;
    while(sumb>suma){
      c1 = suma-a[i]+9;
      c2 = sumb-b[j];
      if(abs(c1-suma)>abs(c2-sumb) && i<3){
        suma=c1;
        i++;
      }else if(j>=0){
        sumb=c2;
        j--;
      }
      minimo++;
    }
    

  }
  cout << minimo << endl;
  
  return 0;
}
