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
    ll mod = 1e9+7;
    while(t--){
        ll n;
        cin>>n;
        ll ans=1;
        while(n--){
            ans*=2;
            ans%=mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}