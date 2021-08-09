//Arissa Yoshida
//A. Lefthanders and Righthanders - https://codeforces.com/contest/234/problem/A

#include<bits/stdc++.h>
using namespace std;


int main(){
    ifstream myReadFile;
    myReadFile.open("input.txt");
    int n;
    vector<char>v;
    char a;
    if (myReadFile.is_open()) {
      myReadFile >> n;
     for(int i=1;i<=n;i++){
        myReadFile >> a;
        v.push_back(a);        
    }
    
    }
    myReadFile.close();
    ofstream myfile;
    myfile.open ("output.txt");
    int c=0;
    int j=n/2;
    for(int i=0;i<n/2;i++){
        if(v[i]=='L' && v[j]=='R' ){
            myfile << i+1 << " " << j+1 << endl;
        }else{
            myfile << j+1 << " " << i+1 << endl;
        }
        j++;
    }
    myfile.close();



   
    return 0;
}
