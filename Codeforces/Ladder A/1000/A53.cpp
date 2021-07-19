//Arissa Yoshida
//A. Young Physicist - https://codeforces.com/contest/69/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a1=0,b1=0,c1=0;
	int a=0,b=0,c=0;
	for(int i=0;i<n;i++){
		cin >> a >>b >> c;
		a1+=a;
		b1+=b;
		c1+=c;
	}

	if(a1==0 && b1==0 && c1 ==0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}
