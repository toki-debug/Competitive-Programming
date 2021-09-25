//Arissa Yoshida
//A - Favorite Sequence - https://codeforces.com/contest/1462/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;
 
#define no_tle_pls ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mod 1000000007
#define MAX 1000000007
 
int main(){
    no_tle_pls
   int t;
   cin >> t;
   while(t--){
       int n;
       cin>> n;
       vector<ll>v;
       for(int i=0;i<n;i++){
           ll a;
           cin >> a;
            v.push_back(a);
       }
       int j=n-1;
       if(n%2){
           n++;
       }
       for(int i=0;i<n/2;i++){
           
           cout << v[i] << " ";
           if(j>i){
               cout << v[j] << " ";
            j--;
           }
       }
       cout << endl;
 
   }
    return 0;
 
}
