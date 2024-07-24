#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Code By VibhuGodson
unordered_set<int>r,c,sum,diff;
ll ans=0;
int co=0;
void solve(vector<string>&v,int I,int J){
    // cout<<"\nI: "<<I<<"J: "<<J<<endl;
    if(J>7) return;
    if(I==8) {
        ans++;
        // if(co<3){
        // }    
        return;
    }
    if(v[I][J]=='*' or r.find(I)!=r.end() or c.find(J)!=c.end() or sum.find(I+J)!=sum.end() or diff.find(I-J)!=diff.end()) {
        // cout<<"\nreturn\n";
        return;

    }
    r.insert(I);
    c.insert(J);
    sum.insert(I+J);
    diff.insert(I-J);
    v[I][J]='Q';

            // cout<<ans<<endl;
            // cout<<"\n----------------------\n";
            // for(auto&i:v) cout<<i<<endl;
            // cout<<"\n----------------------\n";
            // cout<<"Col: ";
            // for(auto&i:c) cout<<i<<" ";
            // cout<<"\nRow: ";
            // for(auto&i:r) cout<<i<<" ";
            // cout<<"\nSum: ";
            // for(auto&i:sum) cout<<i<<" ";
            // cout<<"\nDiff: ";
            // for(auto&i:diff) cout<<i<<" ";
            // cin>>co;

    for(int j=0;j<8;j++){
        if(I==7){
            ans++;
            break;
        } 
        solve(v,I+1,j);
    }
    r.erase(I);
    c.erase(J);
    sum.erase(I+J);
    diff.erase(I-J);
    v[I][J]='.';
}
int main ()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--){
        vector<string> board(8);
        for(auto&i:board){
            cin>>i;
        }
        for(int i=0;i<8;i++){
            solve(board,0,i);
        }
        cout<<ans<<endl;
    }
    return 0;
}