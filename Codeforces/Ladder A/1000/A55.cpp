//Arissa Yoshida
//A. Card Game - https://codeforces.com/contest/106/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	map<char,int>val;
	val['6'] = 1;
	val['7'] = 2;
	val['8'] = 3;
	val['9'] = 4;
	val['T'] = 5;
	val['J'] = 6;
	val['Q'] = 7;
	val['K'] = 8;
	val['A'] = 9;


	char ch;
	cin >> ch;
	getchar();
	string s;
	getline(cin,s);
	int aa=0;
	if(s[1]==ch && s[1]!=s[4]){
		aa = 1;
	}else if(s[1]==s[4]){
		if(val[s[0]]>val[s[3]]){
			aa=1;
		}else{
			aa=0;
		}
	}else if(s[1]!=s[4]){
		aa=0;
	}
	if(!aa){
		cout <<"NO" << endl;
	}else{
		cout << "YES" << endl;
	}
	
	 

	

	return 0;
}
