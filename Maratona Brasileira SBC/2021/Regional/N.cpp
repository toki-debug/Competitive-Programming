//Arissa Yoshida
//N. No Luck - Maratona de Programação 2021, ICPC
//Link Codeforces - https://codeforces.com/gym/103388/problem/N

#include <bits/stdc++.h>
using namespace std;

#define no_tle_pls                                                             \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);

vector<int> merge(vector<int> &v1, vector<int> &v2) {
  int i = 0, j = 0;

  vector<int> v;

  while (i < v1.size() && j < v2.size()) {
    if (v1[i] <= v2[j]) {
      v.push_back(v1[i]);
      i++;
    } else {
      v.push_back(v2[j]);
      j++;
    }
  }

  for (int k = i; k < v1.size(); k++)
    v.push_back(v1[k]);
  for (int k = j; k < v2.size(); k++)
    v.push_back(v2[k]);
  return v;
}

void buildTree(vector<int> *tree, vector<int> &arr, int index, int s, int e) {

  if (s == e) {
    tree[index].push_back(arr[s]);
    return;
  }

  int mid = (s + e) / 2;
  buildTree(tree, arr, 2 * index, s, mid);
  buildTree(tree, arr, 2 * index + 1, mid + 1, e);

  tree[index] = merge(tree[2 * index], tree[2 * index + 1]);
}

int query(vector<int> *tree, int index, int s, int e, int l, int r, int k) {

  if (r < s || l > e)
    return 0;

  if (s >= l && e <= r) {

    return (tree[index].size() -
            (lower_bound(tree[index].begin(), tree[index].end(), k) -
             tree[index].begin()));
  }

  int mid = (s + e) / 2;
  return (query(tree, 2 * index, s, mid, l, r, k) +
          query(tree, 2 * index + 1, mid + 1, e, l, r, k));
}

int main() {
  no_tle_pls
  int n, q, k;
  cin >> n >> q;
  vector<int> tree[4 * n + 1];
  vector<int>arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  buildTree(tree, arr, 1, 0, n - 1);
  while (q--) {
    int l, r;
    cin >> l >> k >> r;
    l--;
    if (arr[l] >= k) {
      cout << "0\n";
    } else {
      cout << query(tree, 1, 0, n - 1, l, r + l, k) << "\n";
    }
  }

  return 0;
}
