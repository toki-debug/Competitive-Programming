//Arissa Yoshida
//A. Commentary Boxes - https://codeforces.com/contest/990/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n,m,a,b;
  cin  >> n >> m >> a >> b;
  cout << min(abs((n%m)*b), (abs((n%m)-m)*a)) << endl;
}
