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
        ll len=1,count=9,start=1;
        ll n;
        cin>>n;
        // string st="";
        // for(int i=0;i<n;i++) st+=to_string(i);
        // cout<<st[n]<<endl;
        while(n>len*count){
            n-=len*count;
            len++;
            count*=10;
            start*=10;
        }
        start+=(n-1)/len;
        string num = to_string(start);
        cout<<num[(n-1)%len]<<endl;
    }
    return 0;
}