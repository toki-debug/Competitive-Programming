//Arissa Yoshida
//A. Single Push - https://codeforces.com/contest/1253/problem/A

#include <bits/stdc++.h>
#define MAXN 10000000

using namespace std;
typedef long long ll;
ll MOD = 1000000007;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >>n;
    vector<int>a(n,0);
    vector<int>b(n,0);
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    for(int i=0;i<n;i++){
      cin >> b[i];
    }
    int dif =0;
    int ant =0;
    int f =0;
    int c =0;
    int r=1;
    for(int j=0;j<n;j++){
      if(a[j]!=b[j]){
        if(c==-1){
          r = 0;
            break;
          break;
        }
        dif = a[j]-b[j];
        if(dif>0){
          r =0;
          break;
        }
        if(c==0){
          ant = dif;
        }else{
          if(ant !=dif){
            r = 0;
            break;
          }
        }
        c++;
      }else if(c!=0){
        c=-1;
      }
    }
    if(!r){
      cout << "NO" << endl;
    }else{
      cout << "YES" << endl;
    }
  }

  return 0;
}
