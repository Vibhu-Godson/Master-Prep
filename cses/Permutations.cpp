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
        int n;
        cin>>n;
        if(n==1) cout<<1<<endl;
        else if(n==2 or n==3) cout<<"NO SOLUTION";
        else{
            for(int i=2;i<=n;i+=2) cout<<i<<" ";
            for(int i=1;i<=n;i+=2) cout<<i<<" ";
        }
    }
    return 0;
}