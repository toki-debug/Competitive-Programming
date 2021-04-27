//Arissa Yoshida 04/2021
//https://www.spoj.com/problems/EASYMRKS/

#include <bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin >> t;
  int x=0;
  while(t--){
    x++;
    int n,k;
    int a,soma=0;
    cin >> n >> k;
    for(int i=0;i<n;i++){
      cin >> a;
      soma+=a;
    }
    k = k*(n+1);
    int r = k - soma;
    cout << "Case " << x << ": ";
    cout << r << endl;


  }
  
  
    return 0;
}

