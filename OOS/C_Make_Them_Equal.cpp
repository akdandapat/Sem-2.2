#include<bits/stdc++.h>
using namespace std;

/*
Name: ARPANN
Date: 11/05/26 19:36
*/

#define ll long long
#define vll vector<ll>
#define endl "\n"

void solve(){
    ll n;
    char ch;
    string s;
    cin>>n>>ch>>s;
    
    string sch(n,ch);
    if(sch==s){
        cout<<0<<endl;
        return;
    }
    
    for(ll i=n/2+1;i<=n;i++){
        if(s[i-1]==ch){
            cout<<1<<endl<<i<<endl;
            return;
        }
    }
    
    cout<<2<<endl<<n-1<<" "<<n<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--)
        solve();
        
    return 0;
}