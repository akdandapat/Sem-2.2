#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define endl '\n'

/* Author:ARPANN
   Started: 08:50 17-05-2026 
*/

void solve(){
    ll n,m;
    cin>>n>>m;
    
    ll n_=n;
    ll n2=0,n5=0;
    while(n%2==0){
        n/=2;
        n2++;
    }

    while(n%5==0){
        n/=5;
        n5++;
    }

    ll mul=1;
    ll mx=0,mn=0;
    if(n2>n5){
        mx=2;mn=5;
    }
    else{
        mx=5;mn=2;
    }

    ll extra=llabs(n5-n2);
    while(extra && mul<=m){
        mul*=mn;
        extra--;
    }

    if(mul>m){
        mul/=mn;
        for(ll i=mn;i>1;i--){
            if(mul*i<=m){
                mul*=i;
                break;
            }
        }
    }

    while(mul<m){
        mul*=10;
    }

    if(mul>m){
        mul/=10;
        for(ll i=9;i>1;i--){
            if(mul*i<=m){
                mul*=i;
                break;
            }
        }
    }
    
    
    cout<<n_*mul<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1;
    cin>>t;
    while(t--)
        solve();
        
    return 0;
}