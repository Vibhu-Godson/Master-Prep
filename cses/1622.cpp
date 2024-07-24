#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Code By VibhuGodson
vector<string>ans;
void solve(string &s, string c, vector<bool>&used){
    if(s.size()==c.size()){
        ans.push_back(c);
        return;
    }
    for(int i=0;i<s.size();i++){
        if(used[i] or (i>0 and s[i]==s[i-1] and used[i-1])) continue;
        used[i]=true;
        c+=s[i];
        solve(s,c,used);
        c.pop_back();
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
        string s;
        cin>>s;
        vector<bool>used(s.size());
        sort(s.begin(),s.end());
        solve(s,"",used);
        cout<<ans.size()<<endl;
        for(auto&i:ans){
            cout<<i<<endl;
        }
    }
    return 0;
}