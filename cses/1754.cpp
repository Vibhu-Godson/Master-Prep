#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Code By VibhuGodson
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(min(a,b)>=max(a,b)/2 and (a+b)%3==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}