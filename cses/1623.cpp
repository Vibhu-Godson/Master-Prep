#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Code By VibhuGodson
ll mx,mn;
void solve(vector<ll>&v,ll target,vector<bool>&used, int idx,ll curr=0){
    // cout<<curr<<endl;
    if(curr>target/2){
        mx = min(mx,curr);
        return;
    }
    else if(curr<target/2){
        mn = max(mn,curr);
    }else{
        mn=curr;
        if(target%2==0)mx=curr;
    }
    for(int i=idx;i<v.size();i++){
        if(used[i]) continue;
        used[i]=true;
        curr+=v[i];
        solve(v,target, used, i+1,curr);
        curr-=v[i];
        used[i]=false;
    }
}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll sum =0;
        for(auto&i:v) {
            cin>>i;
            sum+=i;
        }
        // cout<<sum<<endl;
        vector<bool>used(n);
        mx = LONG_LONG_MAX;
        mn=LONG_LONG_MIN;
        solve(v,sum,used,0);
        // cout<<mx<<" "<<mn<<endl;
        cout<<mx-mn<<endl;
    }
    return 0;
}