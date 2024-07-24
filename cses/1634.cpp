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
        int inf = 1e9+7;
        cin>>n>>x;
        vector<int>coins(n);
        for(auto&i:coins){
            cin>>i;
        }
        vector<int>ans(x+1,inf);
        ans[0]=0;
        for(int i=1;i<=x;i++){
            for(auto&j:coins){
                if(i>=j){
                    ans[i]=min(ans[i],1+ans[i-j]);
                }
            }
        }
        if(ans[x]==inf) cout<<-1;
        else
        cout<<ans[x];
    }
    return 0;
}