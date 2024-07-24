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
        string s;
        cin>>s;
        vector<int>v(26);
        for(auto&i:s) v[i-'A']++;
        int c =0;
        for(auto&i:v) if(i%2==1) c++;
        if(c>1) cout<<"NO SOLUTION";
        else{
            string st= "",mid="",end="";
            for(int i=0;i<26;i++){
                while(v[i]>=2) {
                    v[i]-=2;
                    st+=('A'+i);
                    end+=('A'+i);
                }
                if(v[i]==1) mid+=('A'+i);
            }
            reverse(end.begin(),end.end());
            cout<<st+mid+end;
        }

    }
    return 0;
}