//Arissa Yoshida
//A. Palindromic Times - https://codeforces.com/contest/108/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int a, b;
	char c;
	cin >> a >> c >> b;
	string ver;
	if(a>=0 && a<10){
		ver = '0';
	}
	ver+=to_string(a);
	reverse(ver.begin(),ver.end());
	int d = stoi(ver);
	if(d<=b || d >=60){
	a+=1;
	if(a>23){
		a=0;
	}
	if(a>=6 && a<=9){
		a=10;
	}else if(a>=16 && a<=19){
		a=20;
	}
	}

	if(a>=0 && a<10){
		cout << 0;
		s = '0';
	}
	cout << a << ":";

	s+= to_string(a);
	
	reverse(s.begin(),s.end());

	cout << s << endl;
	

	

	return 0;
}
