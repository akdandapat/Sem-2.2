#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define endl "\n"
#define arr3 array<int,3>


void solve(){
    ll n,m;
    cin>>n>>m;

    if(n%2==0)
        cout<<"YES"<<endl;
    else if(m%2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--)
        solve();
}