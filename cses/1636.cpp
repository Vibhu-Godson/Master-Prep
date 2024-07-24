#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Code By VibhuGodson
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--){
        int n,x;
        int mod = 1e9+7;
        cin>>n>>x;
        vector<int>c(n);
        for(auto&i:c) cin>>i;
        vector<vector<int>>dp(n+1,vector<int>(x+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=x;j++){
                dp[i][j] = dp[i-1][j];
                dp[i][j]%=mod;
                if(j>=c[i-1]) {
                    dp[i][j]+=dp[i][j-c[i-1]];
                    dp[i][j]%=mod;
                }
            }
        }
        cout<<dp[n][x]<<endl;
    }
    return 0;
}