//Arissa Yoshida
//A. Contest - https://codeforces.com/contest/501/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int p1 = max(((3*a)/10),(a-((a/250)*c)));
	int p2 = max(((3*b)/10),(b-((b/250)*d)));
	if(p1>p2){
		cout << "Misha" << endl;
	}else if(p1<p2){
		cout << "Vasya" << endl;
	}else{
		cout << "Tie" << endl;
	}
	
	return 0;
}
