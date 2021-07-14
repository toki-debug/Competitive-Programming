#include <bits/stdc++.h>
using namespace std;
#define MAXN 9999
vector<int> permutation;

int n;
bool chosen[MAXN];
void search() {
if (permutation.size() == n) {
// process permutation
for(int i=0;i<n;i++){
  cout << permutation[i] << " ";
}
cout << endl;
} else {
for (int i = 1; i <= n; i++) {
if (chosen[i]) continue;
chosen[i] = true;
permutation.push_back(i);
search();
chosen[i] = false;
permutation.pop_back();
}
}
}

int main(){
  
  cin >> n;
  search();
  

  
  return 0;
}

