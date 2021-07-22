//Arissa Yoshida
//A. String Task - https://codeforces.com/contest/118/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	string a="";
	for(int i=0;i<s.size();i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]+=25+'a'-'Z';
		}
		if(s[i]!='a' && s[i]!='o' && s[i]!='y'&& s[i]!='e' && s[i]!='u' && s[i]!='i'){
			a+=".";
			a+=s[i];
		}
	}
	cout << a << endl;
	return 0;
}
