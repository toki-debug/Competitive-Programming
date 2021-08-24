// Arissa Yoshida
//B. Average Sleep Time - https://codeforces.com/contest/808/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    /*ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
    int n,k;
    cin >> n >> k;
    double r;
    vector<double>a(1,0);

    double b;
    double c=0;
    double sum=0;
    double s=0;
    for(int i=0;i<n;i++){
        cin >> b;
        s+=b;
        a.push_back(s);
        c=b;
    }
    b = n-k+1;
    for(int i=k;i<=n;i++){
        sum+=a[i]-a[i-k];
    }
    
    r = sum/b;
   printf("%.10lf\n",r);
    return 0;
}
