//Arissa Yoshida
//A. Equalize Prices Again - https://codeforces.com/contest/1234/problem/A

#include <bits/stdc++.h>
using namespace std;

#define MAXN 79888

int main(){
  int t;
  cin >> t;
  int n;
  while(t--){
    cin >> n;
    double sum =0;
    double a =0;
    double s =n;
    while(n--){
     cin >>a;
     sum+=a; 
    }
    int r = ceil (sum/s);
    //sum = ceil (double(sum/s));
    cout << r <<endl;
  }
  return 0;
}
