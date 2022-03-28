//Arissa Yoshida
//ACM International Collegiate Programming Contest 2011 - Latin American Regional Contests
//Problema B
//Link Codeforce Gym - https://codeforces.com/gym/100540/attachments

#include <bits/stdc++.h>
using namespace std;
#define no_tle_pls ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long int ll;

int main()
{
    no_tle_pls
    int n, x, a;
    const int inf = 1e7;
    vector<vector<int>> dp(1005, vector<int>(1005));
    while (cin >> n)
    {
        if(n==0)return 0;
       
        int r = 0;
        for(int i=0;i<=n;i++){
           
            
        } 
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cin >> a;
                int x = i - j + 1;
                if(j==1) dp[x][0] = 0;
                dp[x][j]=dp[x][j-1] + a;
                
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = n - i + 1; j >= 1; j--)
            {
                if(j+1>n-i+1) dp[i][j] = dp[i-1][j] + dp[i][j];
                else dp[i][j] = max(dp[i-1][j] + dp[i][j], dp[i][j+1]);
                r = max(r, dp[i][j]);
            }
        }
        cout << r << "\n";
    }
}