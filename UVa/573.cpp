//Arissa Yoshida
//573 - The Snail - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=514&mosmsg=Submission+received+with+ID+26726090

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;
 
int main() {
    double h,u,d,f;
    while(cin >> h >> u >> d >> f){
        if(h==0){
            break;
        }
        int day=0;
        double fac = u*(f/100);
        double pos=0;
        int flag =0;
        while(1){
            day++;
            if(u<0){
                u=0;
            }
            pos+=u;
            if(pos>h){
                flag=1;
                break;
            }
            pos-=d;
            if(pos<0){
                break;
            }
            
            u-=fac;
            
        }
         if(flag){
        cout << "success ";
    }else{
        cout << "failure ";
    }
    cout << "on day " << day << endl;
    }
   
  
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
typedef vector <int> vec;
typedef vector <pa> vep;


int main(){
    double h, u, d, f;
    while(cin >> h >> u >> d >> f){
        if(h ==0)break;
        double per = (double)f/100;
        double c = u*per;
        int i = u, k = 1;
        
            double x = 0;
            while(x >= 0 && x <= h){
                k++;
                x += u;
                if(x > h){    
                    break;
                }
                x -= d;
                u-=c;   
               
            }
            if(x<0)cout << "failure on day " << k << "\n";
            else cout << "success on day " << k << "\n";
        


    }
}
