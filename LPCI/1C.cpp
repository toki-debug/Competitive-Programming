//Arissa Yoshida 04/2021
//https://vjudge.net/problem/UVA-10812

#include <bits/stdc++.h>
using namespace std;


int main()
{
  int n;
  cin >> n;
  long long int s,d;
  long long int a=0,b=0;
  for(int i=0;i<n;i++){
    cin >> s >> d;
    if(d>s){
       cout << "impossible" << endl;
    }else{
    b = (s-d)/2;
    a = d+b;
    if((a+b==s) && (abs(a-b)==d)){
      cout << a << " "<< b << endl;
    }else{
      cout << "impossible" << endl;
    }
    }
  
  }
    return 0;
}
