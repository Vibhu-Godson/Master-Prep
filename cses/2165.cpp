#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Code By VibhuGodson
void TOH(int n, int a, int b, int c){
    if(!n) return;
    TOH(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    TOH(n-1,b,a,c);
}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(1<<n)-1<<endl;
        TOH(n,1,2,3);
    }
    return 0;
}