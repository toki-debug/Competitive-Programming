//Arissa Yoshida
//A. Bar - https://codeforces.com/contest/56/problem/A

#include<bits/stdc++.h>
using namespace std;

int binarysearch(string drink[12],string s){
	int lower,upper,mid;
	lower =0;
	upper = 11;
	while(lower<=upper){
		mid = lower + (upper-lower)/2;
		if(s>drink[mid]){
			lower = mid+1;
		}else if(s<drink[mid]){
			upper = mid-1;
		}else{
			return 1;
		}
	}

	return 0;

}


int main() {
	string drink[12] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
	int n;
	cin >> n;
	string s;
	int num,r=0;
	for(int i=0;i<n;i++){
		cin >> s;
		if(s[0]<60){
		num = stoi(s);
		if(num<18){
			r++;
		}
		}else if(binarysearch(drink,s)){
			
			r++;
		}
	}
	cout << r << endl;

	return 0;
}
