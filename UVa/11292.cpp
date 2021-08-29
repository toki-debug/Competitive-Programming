//Arissa Yoshida
//http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2267

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1026 
typedef long long int ll;
 
bool comp(int i, int j){
    return i<j;
}

int main() {
        
        ll n,m;
        while(cin >> n >> m){
            if(n==0 && m ==0){
                break;
            }
            vector<ll>head;
            vector<ll>knights;
            ll a;
            while(n--){
                cin >> a;
                head.push_back(a);
            }
            while(m--){
                cin >> a;
                knights.push_back(a);
            }
            sort(head.begin(),head.end(),comp);
            sort(knights.begin(),knights.end(),comp);

            if(head.size()>knights.size()){
                cout << "Loowater is doomed!" << endl;
            }else{
                int t=0;
                int sum=0;
                for(int i=0;i<head.size();i++){
                    t = lower_bound(knights.begin(),knights.end(),head[i])- knights.begin();
                    sum+=knights[t];
                    if(t>=knights.size() || knights[t]<head[i]){
                        sum=-1;
                        break;
                    }
                    knights.erase(lower_bound(knights.begin(),knights.end(),head[i]));
                }
                if(sum==-1){
                    cout << "Loowater is doomed!" << endl;
                }else{
                    cout << sum << endl;
                }
            }


        }
        
        
    
  
}
