//Arissa Yoshida
//A. Football - https://codeforces.com/contest/43/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string,int>teams;
	string a;
	vector<string>b;
	for(int i=0;i<n;i++){
		cin >> a;
		if(teams.find(a)!=teams.end()){
			teams[a]++;
		}else{
			b.push_back(a);
			teams[a] = 1;
		}
	}
	/*map<string, int>::iterator itr;
	itr = teams.end();
	itr--;
	cout << itr->first << endl;*/
	/*for (auto& iter: teams) {
    	cout << iter.first << ": " << iter.second << endl;  
  	}*/
	  int c = teams[b[0]];
	  string r = b[0];
	  for(int i=1;i<b.size();i++){
		  if(teams[b[i]]>c){
			  r = b[i];
			  c = teams[b[i]];
		  }
	  }

		cout << r  << endl;

	return 0;
}
