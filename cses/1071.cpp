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
        ll n,m;
        cin>>n>>m;
        if(n>m){
            if(n%2==0){
                cout<<n*n-m+1;
            }else {
                cout<<(n-1)*(n-1)+m;
            }
        } else {
            if(m%2==0){
                cout<<(m-1)*(m-1)+n;
            }else {
                cout<<m*m-n+1;
            }
        }
        cout<<endl;
    }
    return 0;
}