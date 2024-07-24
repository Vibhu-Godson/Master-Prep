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
        int n;
        int mod =1e9+7;
        cin>>n;
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                char ch;
                cin>>ch;
                if(ch=='*') dp[i][j]=-1;
            }
        }
        for(int i=0;i<n and dp[0][i]!=-1; i++){
            dp[0][i] = 1;
        }
        for(int i=0;i<n and dp[i][0]!=-1; i++){
            dp[i][0] = 1;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                if(dp[i][j]!=-1){
                    dp[i][j] = max(0,dp[i-1][j])%mod + max(0,dp[i][j-1])%mod;
                    dp[i][j]%=mod;
                }
            }
        }
        cout<<max(0,dp[n-1][n-1]);
    }
    return 0;
}