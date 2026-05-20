#include<bits/stdc++.h>
using namespace std;

/*
Author: ARPANN
19:50
-------
creezy crezzy
2 pqs
*/

#define ll long long
#define vll vector<ll>
#define endl "\n"
#define arr3 array<ll,3>


void solve(){
    ll n,m;
    cin>>n>>m;

    vll a(m);
    for(ll &num:a) cin>>num;
    priority_queue<arr3>maxpq;//pts,onepointer,2pointer....
    priority_queue<arr3,vector<arr3>,greater<arr3>>minpq;
    //return;
    vll b(m);

    for(ll i=0;i<m;i++){
        a[i]--;
        b[a[i]]++;
    }
    //return;
    for(ll i=0;i<n;i++){
        minpq.push({b[i],b[i],0});
        maxpq.push({b[i],b[i],0});
    }

    // cout<<maxpq.top()[0];
    // return;

    while(maxpq.top()[0]-1>=minpq.top()[0]+2){
        // cout<<maxpq.top()[0]<<endl;
        // cout<<minpq.top()[0]<<endl<<endl;
        auto maxm=maxpq.top();
        maxpq.pop();
        
        maxpq.push({maxm[0]-1,maxm[1]-1,maxm[2]});

        auto minm=minpq.top();
        minpq.pop();

        minpq.push({minm[0]+2,minm[1],minm[2]+1});
        // cout<<maxpq.top()[0]<<endl;
    }

    cout<<maxpq.top()[0]<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--)
        solve();
}