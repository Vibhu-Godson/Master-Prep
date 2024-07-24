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

    // Plan is to find out total moves that knight can kill another and subtract it with total possiblity
    // total_ways x total_position_in_current_way x total_position_of_attack
    // 4x1x2
    // 4x2x3
    // 4x(n-4)x4
    // 4x1x4
    // 4x(n-4)x6
    // (n-4)x(n-4)x8 
            // if you construct a formula with this it will go: 8*(n-1)*(n-2)
    while(t--){
        ll n;
        cin>>n;
        for(ll i=1;i<=n;i++){
            cout<<((i*i)*(i*i-1)/2 - 4*(i-1)*(i-2))<<endl; 
        }
    }
    return 0;
}