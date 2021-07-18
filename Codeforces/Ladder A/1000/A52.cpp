//Arissa Yoshida
//A. Chat room - https://codeforces.com/contest/58/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	string p = "hello";
	string z="";
	int  t=0,flag =0;
	for(int i=0;i<s.size();i++){
		if(s[i]==p[t]){
			z+=s[i];
			t++;
			flag =1;
			if(z==p){
				flag=3;
				break;
			}
		}else if(flag==1){
			if(s[i]==p[t-1]){
				continue;
			}
			
		}		
	}
	if(flag==3){
		cout << "YES" << endl;
	}else{
	cout << "NO" << endl;
	}

	return 0;
}
