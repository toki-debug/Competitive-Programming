//Arissa Yoshida
//B. Run For Your Prize - https://codeforces.com/contest/938/problem/B
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
  vector<int>v;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    v.push_back(a);
  }
  int p1 = 1;
  int p2 = 1000000;
  sort(v.begin(),v.end());
  int  j=n-1;
  int r=0;
  int dist;
  for(int i=0;i<n;i++){
    if(i>j){
      break;
    }
    dist = min(abs(p1-v[i]),abs(p2-v[j]));
    r+=dist;
    if(dist ==abs(p1-v[i])){
      j++;
    }else{
      i--;
    }
    j--;
    p1+=dist;
    p2-=dist;
  }
  cout << r << endl;  
  return 0;
}
