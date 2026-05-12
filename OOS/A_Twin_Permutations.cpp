#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define endl "\n"

void solve(){
    ll n;
    cin>>n;

    vll a(n);
    for(ll &num:a) {
        cin>>num;
    }

    for(ll i=0;i<n;i++){
        cout<<(n+1)-a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();
}