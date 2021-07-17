//Arissa Yoshida
//A. Shell Game - https://codeforces.com/contest/35/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	int x;
	ifstream myfile;
  	myfile.open ("input.txt");
	ofstream myanswer;
	myanswer.open("output.txt");

	myfile >> x;
	
	int vet[5];
	for(int i =1;i<=3;i++){
	vet[i]=i;
	}
	int a,b,c;
	for(int i =0;i<3;i++){
		myfile >> a >> b;
		c = vet[a];
		vet[a] = vet[b];
		vet[b] = c;
	}
	for(int i=1;i<=3;i++){
		if(vet[i]==x){
			myanswer << i << endl;
			break;
		}
	}
	
	return 0;
}
