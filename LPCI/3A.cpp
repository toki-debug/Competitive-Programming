//Arissa Yoshida 04/2021
//https://www.spoj.com/problems/PAIRS1/

#include <bits/stdc++.h>
using namespace std;


int main()
{
  long long int n,k;
  vector<int>v;
  long long int a;

  cin >> n >> k;
  for(int i=0;i<n;i++){
      cin >> a;
      v.push_back(a);
  }
  int r=0;
  int t=0;
  sort(v.begin(),v.end());
  for(int i=0;i<v.size()-1;i++){
    t = i+1;
   while(abs((v[t]-v[i]))<=k){
     if(abs(v[t]-v[i])==k){
       r++;
     }
     t++;
   }
  }
  cout << r << endl;
    return 0;
}

