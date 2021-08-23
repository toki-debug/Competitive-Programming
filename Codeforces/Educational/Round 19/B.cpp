//Arissa Yoshida
//B. Odd sum - https://codeforces.com/contest/797/problem/B
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  int maximopar = 0;
  int maximoimpar;
  vector<int> impar;
  vector<int> par;
  int flag = 1;
  int flag2 = 1;
  int a;
  int sum = 0;
  int sum2 = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a % 2 == 0) {
      par.push_back(a);
    } else {
      impar.push_back(a);
    }
  }
  if(!par.empty()){
       sort(par.begin(), par.end());
       for (int i = par.size() - 1; i >= 0; i--) {
        sum += par[i];
        maximopar = max(maximopar, sum);
  }
  }
 
  sort(impar.begin(), impar.end());
  
  
    sum2 = maximopar;
  for (int i = impar.size() - 1; i >= 0; i--) {
    sum2 += impar[i];
    if (flag2) {
      maximoimpar = sum2;
      flag2 = 0;
    } else {
        if(sum2%2!=0){
      maximoimpar = max(maximoimpar, sum2);
        }
    }
  }

  cout << maximoimpar << endl;
  return 0;
}
