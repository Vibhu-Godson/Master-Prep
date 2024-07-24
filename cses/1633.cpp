#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (int)1e9+7
// Code By VibhuGodson
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n+1,0);
        v[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<7;j++){
                if(i-j>-1){
                    v[i]+=v[i-j];
                    v[i]%=mod;
                }
            }
        }
        cout<<v[n];
    }
    return 0;
}