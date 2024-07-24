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
        vector<int>v1,v2;
        bool got =false;
        if(n%4==0){
            got = true;
            int i=1;
            while(i<=n/4) v1.push_back(i++);
            while(i<=3*n/4) v2.push_back(i++);
            while(i<=n) v1.push_back(i++);
        } else if(n%2==1 and (n/2)%2==1) {
            got = true;
            int i=1;
            int x=n/2;
            x=(x-1)/2;
            while(i<=x) v1.push_back(i++);
            while(i<n-x) v2.push_back(i++);
            while(i<=n) v1.push_back(i++);
        }
        if(got){
            cout<<"YES\n";
            cout<<v1.size()<<endl;
            for(auto&i:v1) cout<<i<<" ";
            cout<<endl<<v2.size()<<endl;
            for(auto&i:v2) cout<<i<<" ";
        } else {
            cout<<"NO";
        }
    }
    return 0;
}