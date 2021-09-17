//GDB
//C. Mocha and Hiking - https://codeforces.com/contest/1559/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;
 
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x;
        int flag = 0, flag2 = 0;
        vec v(n+1);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
            if(i == n && v[i] == 0){
                flag = 1;
            }
            if(i == 1 && v[i] == 1){
                flag2 = 1;
            } 
        }
        if(flag){
            for(int i = 1; i <=n+1; i++){
                cout << i << " ";
            }
            cout << "\n";
        }
        else if(flag2){
            cout << n+1 << " ";
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
            cout << "\n";
        }
        // 0 0 1 0 1
        else{
            vec ans;
            for(int i = 1; i <= n; i++){
                ans.push_back(i);
            }
            for(int i = 2; i <= n; i++){
                if(v[i-1] == 0 && v[i] == 1){
                    ans.insert(ans.begin() + i - 1, n+1);
                    break;
                }
            }
            for (auto f: ans){
                cout << f << " ";
            }
            cout << "\n";
        }
    }
    
 
}
