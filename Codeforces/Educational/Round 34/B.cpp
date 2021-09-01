//Arissa Yoshida
//B. The Modcrab - https://codeforces.com/contest/903/problem/B

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000 
typedef long long int ll;

int main() {
  /*ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);*/
  int h1,a1,c1;
  int h2,a2;
  cin >> h1 >> a1 >> c1;
  cin >> h2 >> a2;
  int x  = ceil(double(h1)/(double)a2);//monster
  int y  = ceil(double(h2)/(double)a1);//player
  int h=0;
  
    while(x<y){
      h++;
      h1+=c1;
      h1-=a2;
      x =  ceil(double(h1)/(double)a2);   
    }
    cout << h+y << endl;
    while(h--){
      cout << "HEAL" << endl;
    }
    while(y--){
      cout << "STRIKE" << endl;
    }  

  

  return 0;
}
