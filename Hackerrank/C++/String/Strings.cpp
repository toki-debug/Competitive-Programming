//https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b,c;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    
    cout << a + b << endl;
    cout << b[0];
    for(int i=1;i<a.size();i++){
        cout << a[i];
    }
     cout << " " << a[0];
    for(int i=1;i<b.size();i++){
        cout << b[i];
    }
    cout << endl;
    
    return 0;
}

