//Arissa Yoshida 04/2021
//http://codeforces.com/problemset/problem/91/B


#include <bits/stdc++.h>
using namespace std;


int main(){
  
  int x;
  cin >> x;
  vector< pair<int,int> >v;
  int r[100010];
  int a;
  for(int i=0;i<x;i++){
    cin >> a;
    v.push_back(make_pair(a,i));
  }
  sort(v.begin(),v.end());
  int Max = -1;
  for (int i = 0; i < x; i++)
	{
		r[v[i].second] = max(0, Max - v[i].second);
		Max = max(Max, v[i].second);
	}
  for(int i=0;i<x;i++){
    if(i==0){
      cout << r[i]-1;
    }else{
      cout << " " << r[i]-1 ;
    }
    
  }
  cout << endl;

    return 0;
}

