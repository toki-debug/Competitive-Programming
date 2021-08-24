// Arissa Yoshida
//B. Solve It - https://vjudge.net/problem/UVA-10341/origin
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


double conta(double p, double q,double r,double s,double t, double u, double x){
    return p*exp(-x)+q*sin(x) + r*cos(x)+s*tan(x)+t*x*x+u;
}


int main(){
    
    double p,q,r,s,t,u;
    while(cin >> p >> q >> r >> s >> t >> u){
        double final=-1;
        double ini=0, fim=1, meio=(fim+ini)/2;
        double x=0;
        int i=101;
        while(i--){
            meio = (fim+ini)/2;
            x = conta(p,q,r,s,t,u,meio);
            //cout << x <<" " << meio<< endl;
            if(abs(x)<1e-10){
                final = meio;
                break;
            }
            if(x>0){
                ini = meio;
             }else{
                 fim = meio;
            }
            
        }
       
        
        if(final==-1){
            cout << "No solution" << endl;
        }else{
            printf("%.4lf\n",final);
        }
    }

    return 0;
}
