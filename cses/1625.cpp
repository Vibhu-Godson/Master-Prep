#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Code By VibhuGodson
vector<int>xx={0,1,0,-1,0};
map<char,int>mp;
// map<pair<int,int>,char>mp1;
bool isValid(vector<string>&board,int x, int y){
    return x>-1 and x<7 and y>-1 and y<7 and board[x][y]=='.';
}
ll ans=0;
void solve(vector<string>&board,int x, int y, int I, string&st){
    if(I==st.size()){
        // if(ans<5)
        // for(auto&i:board){
        //     cout<<i<<endl;
        // }

        if(x==6 and y==6) ans++;
        return;
    }
    if(st[I]!='?'){
        int i=mp[st[I]];
        int x1=x+xx[i];
        int y1=y+xx[i-1];
        if(isValid(board,x1,y1)){
            board[x1][y1]='-';
            solve(board,x1,y1,I+1,st);
            board[x1][y1]='.';
        }
    }
    else{
        for(int i=1;i<5;i++){
            int x1=x+xx[i];
            int y1=y+xx[i-1];
            if(isValid(board,x1,y1)){
                board[x1][y1]='-';
                solve(board,x1,y1,I+1,st);
                board[x1][y1]='.';
            }
        }
    }
}
int main ()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    ll t=1;
    mp['R']=1;
    mp['U']=2;
    mp['L']=3;
    mp['D']=4;
    // mp1[{0,1}]='-';
    // mp1[{1,0}]='|';
    // mp1[{0,-1}]='-';
    // mp1[{-1,0}]='|';
    // cin>>t;
    while(t--){
        string st;
        cin>>st;
        vector<string>board(7,".......");
        solve(board,0,0,0,st);
        // cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}