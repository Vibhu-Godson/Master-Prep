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
        ll n;
        cin>>n;
        ll x=5;
        ll ans=0;
        while(x<=n){
            ans+=n/x;
            x*=5;
        }
        cout<<ans<<endl;
    }
    return 0;
}