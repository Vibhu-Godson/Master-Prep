#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Code By VibhuGodson
vector<int> getDigit(int n){
    set<int>ans;
    while(n>0){
        ans.insert(n%10);
        n/=10;
    }
    vector<int>x;
    for(auto&i:ans) x.push_back(i);
    return x;
}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>dp(n+1,1e9);
        dp[0]=0;
        for(int i=1;i<10;i++) dp[i]=1;
        for(int i=10;i<=n;i++){
            auto digits = getDigit(i);
            for(auto&dig:digits){
                dp[i] = min(dp[i-dig]+1,dp[i]);
            }
        }
        cout<<dp[n]<<endl;
    }
    return 0;
}