//Arissa Yoshida
//B. Scenes From a Memory - https://codeforces.com/contest/1562/problem/B

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
 
int main() {
  int t;
  string notprime = "14689";
  int prime[25] = {2,  3,  5,  7,  11, 13, 17, 19, 23, 29, 31, 37, 41,
                   43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
 
  cin >> t;
  while (t--) {
    vector<int> v(10, 0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int f = 0;
    for (int i = 0; i < s.size(); i++) {
      for (int j = 0; j < notprime.size(); j++) {
        if (s[i] == notprime[j]) {
          f = 1;
          break;
        }
      }
      if (f) {
        cout << 1 << endl;
        cout << s[i] << endl;
        break;
      }
    }
    
    if (!f) {
      for (int i = 0; i < s.size(); i++) {
          
        for (int j = i + 1; j < s.size(); j++) {
 
          if (!binary_search(prime, prime + 25, (s[i]-'0') * 10 + (s[j]-'0') )) {
            cout << 2 << endl;
            cout << (s[i]-'0') * 10 + (s[j]-'0') << endl;
            i=s.size();
            break;
          }
        }
      }
    }
  }
 
  return 0;
}
