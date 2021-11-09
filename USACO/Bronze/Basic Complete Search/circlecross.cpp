//Arissa Yoshida
//Why Did the Cow Cross the Road II - http://www.usaco.org/index.php?page=viewproblem2&cpid=712

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
 setIO("circlecross");
  string s;
  cin >> s;
  vector<int>inicio(26);
  vector<int>fim(26);
  map<int,int>mp;
  int c;

  int r=0;
  for(int i=0;i<s.size();i++){
      c = s[i]-'A';
      if(mp[c]==0){
        inicio[c] = i;
        mp[c]=1;
      }else{
        fim[c] = i;
      }
  }
  for(int i=0;i<26;i++){
    for(int j=0;j<26;j++){
      if(inicio[i]<inicio[j] && fim[i]<fim[j] && inicio[j]< fim[i]){
        r++;
      }
    }
  }
  cout << r << endl;
}
