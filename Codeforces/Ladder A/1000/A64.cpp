//Arissa Yoshida
//A. Table - https://codeforces.com/contest/359/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,m;
   cin >> n >> m;
   int a;
   int sum=4;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin >> a;
           if(a==1 && ((i==0 && j==0) || (i==n-1 && j==0)|| (i==0 && j==m-1)|| (i==n-1 && j==m-1)) ){
            sum=1;
           }else if(a==1 && (i==0 || j==0 || i==n-1 || j==m-1)){
               sum = min(sum,2);
           }else{
               sum = min(sum,4);
           }
       }
   }
   cout << sum << endl;

    return 0;
}
