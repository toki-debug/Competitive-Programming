//Arissa Yoshida
//A. Chord - https://codeforces.com/contest/88/problem/A

#include<bits/stdc++.h>
using namespace std;


int main(){
    string s[13]={"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};
    string a,b,c;
    cin >> a >> b >> c;
    int x,y,z;
    int v[3];
    for(int i=0;i<12;i++){
        if(a==s[i]){
            v[0] = i;
        }
        if(b==s[i]){
            v[1] = i;
        }
        if(c==s[i]){
            v[2] = i;
        }
    }
    int m=0,n=0;
    
    sort(v,v+3);
    x = v[0];


for(int i=0;i<3;i++){
    x=v[i];
    for(int j=0;j<2;j++){
        m=0;n=0;
        if(j==0){
            y = v[(i+1)%3];
            z = v[(i+2)%3];
        }else{
            z = v[(i+1)%3];
            y = v[(i+2)%3];
        }
    
    if(x>y){
        if(abs(12-x+y)==4){
            m++;
        }else if(abs(12-x+y)==3){
            n++;
        }
    }else{
        if(abs(x-y)==4){
            m++;
        }else if(abs(x-y)==3){
            n++;
        }
    }


    if(y>z){
        if(abs(12-y+z)==4){
            n++;
        }else if(abs(12-y+z)==3){
            m++;
        }
    }else{
        if(abs(y-z)==4){
            n++;
        }else if(abs(y-z)==3){
            m++;
        }
    }

    if(m==2){
        cout << "major" << endl;
        return 0;
    }else if(n==2){
        cout << "minor" << endl;
        return 0;
    }
    }
}
    
    cout << "strange" << endl;
    return 0;
}
