//Arissa Yoshida
//A. Cifera - https://codeforces.com/contest/114/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	double k,l,s;
	long int a=0;
	cin >> k >> l;
	while(1){
		l/=k;
		a++;
		if(l<k){
			break;
		}
	}
	if(l==1){
		cout << "YES" << endl;
		cout << a-1 << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
