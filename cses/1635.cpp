#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Code By VibhuGodson
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    int mod = 1e9+7;
    // cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>c(n);        
        for(auto&i:c) cin>>i;
        vector<int>v(x+1,0);
        v[0]=1;
        for(int i=1;i<=x;i++){
            for(auto j:c){
                if(i>=j) {
                    v[i]+=v[i-j]%mod;
                    v[i]%=mod;
                }
            }
        }
        cout<<v[x];
    }
    return 0;
}