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
        vector<string>v;
        v.push_back("0");
        v.push_back("1");
        for(int i=2;i<=n;i++){
            int size = v.size();
            for(int i=size-1;i>-1;i--){
                v.push_back(v[i]);
            }
            for(int i=0;i<size;i++){
                v[i]="0"+v[i];
                v[i+size] = "1"+v[i+size];
            }
        }
        for(auto&i:v) cout<<i<<endl;
    }
    return 0;
}