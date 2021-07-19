//Arissa Yoshida
//A. Life Without Zeros - https://codeforces.com/contest/75/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int a,b,c;
	string a1,b1,c1;
	cin >> a >> b;
	c = a+b;
	a1 = to_string(a);
	b1 =to_string(b);
	c1 = to_string(c);
	a1.erase(remove(a1.begin(),a1.end(),'0'),a1.end());
	b1.erase(remove(b1.begin(),b1.end(),'0'),b1.end());
	c1.erase(remove(c1.begin(),c1.end(),'0'),c1.end());
	a = stoll(a1);
	b = stoll(b1);
	c = stoll(c1);
	if(a+b==c){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	

	return 0;
}
