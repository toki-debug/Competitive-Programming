//Arissa Yoshida
//A. Equator - https://codeforces.com/contest/962/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;

int main(){
  int n;
  cin >> n;
  int sum=0;
  vector<int>v;
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    sum+=a;
    v.push_back(a);
  }
  if(sum%2!=0){
    sum++;
  }
  int sum2=0;
  for(int j=0;j<n;j++){
    sum2+=v[j];
    if(sum2>=sum/2){
      cout << j+1 << endl;
      break;
    }
  }

}
