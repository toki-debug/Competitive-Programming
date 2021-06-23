//Arissa Yoshida
//A. Reconnaissance 2 - https://codeforces.com/problemset/problem/34/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    vector<int>v;
    int a;
    for(int i=0;i<n;i++){
        cin >>a;
        v.push_back(a);
    }
    int mini;
    int x,y;
    int r = abs(v[0]-v[n-1]);
    mini = r;
    x=1;
    y=n;
    for(int i=0;i<n-1;i++){
            r = abs(v[i]-v[i+1]);
            mini = min(mini, r);
            if(mini == r){
                 x=i+1;
                y=i+2;
            }
    }
    cout << x <<" "<<y << endl;
    
   

  return 0;
}
