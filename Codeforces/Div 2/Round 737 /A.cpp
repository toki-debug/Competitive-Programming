//Arissa Yoshida
//A. Ezzat and Two Subsequences - https://codeforces.com/contest/1557/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long int n;
        long long int total=0;
        cin >> n;
        vector<long long int>v;
        for(long int i=0;i<n;i++){
            long long int a;
            cin >> a;
            total+=a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        double suma=0,sumb=0;
        long long int j=1;
        suma = v[n-1];
        for(long int i=n-2;i>=0;i--){
            if((suma+v[i])/(j+1)>((suma)/j)){
                suma += v[i];
                j++;
            }
        }
        sumb = total - suma;
        double r;
        
        r = sumb/(n-j) + (suma)/(j);
        printf("%.9lf\n",r);
    }
    return 0;
}
