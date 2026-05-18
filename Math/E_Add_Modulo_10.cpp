#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define endl '\n'

/* 
Author:ARPANN
Started: 23:05 17-05-2026 
*/

void solve(){
    ll n;
    cin>>n;
    
    vll a(n),rem(n);
    ll maxm=0;

    for(ll i=0;i<n;i++) {
        cin>>a[i];
        maxm=max(maxm,a[i]);
        rem[i]=a[i]%10;
    }

    for(ll i=0;i<n;i++){
        if(rem[i]==1){
            rem[i]+=1;
            a[i]+=1;
        }
        else if(rem[i]==3){
            rem[i]+=3;
            a[i]+=3;
        }
        else if(rem[i]==7){
            rem[i]=4;
            a[i]+=7;
        }
        else if(rem[i]==9){
            rem[i]=8;
            a[i]+=9;
        }
        maxm=max(maxm,a[i]);
    }

    bool flag=1;
    for(ll i=0;i<n;i++){
        ll diff=maxm-a[i];

        if(diff==0) continue;

        if(rem[i]==5 && diff==5) continue;
        
        else if(rem[i]==2){
            diff=diff%20;
            if(diff==2 || diff==6 || diff==14 || diff==0)
                continue;
        }

        else if(rem[i]==4){
            diff=diff%20;
            if(diff==4 || diff==12 || diff==18 || diff==0)
                continue;
        }

        else if(rem[i]==8){
            diff=diff%20;
            if(diff==8 || diff==14 || diff==16 || diff==0)
                continue;
        }

        else if(rem[i]==6){
            diff=diff%20;
            if(diff==6 || diff==8 || diff==12 || diff==0)
                continue;
        }

        flag=0;
        break;
    }

    cout<<(flag ? "Yes" : "No")<<endl;
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