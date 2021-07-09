//Arissa Yoshida
//A. Way Too Long Words - https://codeforces.com/contest/71/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        int num = a.size();
        if(num >10){
            cout << a[0] << num-2 << a[num-1] << endl;;
        }else{
            cout << a << endl;
        }
    }
 
 
  return 0;
}
