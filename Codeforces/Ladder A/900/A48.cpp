//Arissa Yoshida
//A. Kefa and First Steps - https://codeforces.com/contest/580/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	long int n;
	cin >> n;
	long long int a;
	long long int sum =0;
	long long int b, tam =0;
	for(long int i=0;i<n;i++){
		cin >> a;
		
		if(i==0){
			b = a;
			tam = 1;
		}else{
			if(b>a){
				tam = 1;	
			}else{
				tam++;
			}
		}
		b = a;
		sum = max(sum,tam);
	}
	cout << sum << endl;
	return 0;
}
