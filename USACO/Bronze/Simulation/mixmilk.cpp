//Arissa Yoshida
//Mixing Milk - http://www.usaco.org/index.php?page=viewproblem2&cpid=855

#include <bits/stdc++.h>
using namespace std;
#define PI 2 * acos(0.0)
#define fast_io                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
typedef long long ll;

void setIO(string s) {
  if (!s.empty()) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

int main() {
  setIO("mixmilk");
  vector<pair<int, int>> v;
  vector<int>atual;
  int n = 3;
  int a, b;
  while (n--) {
    cin >> a >> b;
    v.push_back(make_pair(a, b));
    atual.push_back(b);
  }
   
    int aa;

    for(int i=1;i<=100;i++){
        atual[i%3]+=atual[(i-1)%3];
    
        if(atual[i%3]>v[i%3].first){
            atual[(i-1)%3] = atual[i%3] - v[i%3].first; 
            atual[i%3]=v[i%3].first;
        }else{
            atual[(i-1)%3] =0;
        }
    }
    for(int i=0;i<3;i++){
        cout << atual[i] << endl;
    }
   

}
