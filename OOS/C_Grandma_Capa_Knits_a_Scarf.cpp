#include<bits/stdc++.h>
using namespace std;

/*
Name: ARPANN
Date: 11/05/26 09:58
*/

#define ll long long
#define vll vector<ll>
#define endl "\n"

void solve(){
    ll n;
    string s;
    cin>>n>>s;

    ll ans=n;
    
    for(char ch='a';ch<='z';ch++){
        ll i=0,j=n-1;
        ll rem=0;
        bool pal=1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                if(s[i]!=ch && s[j]!=ch){
                    pal=0;
                    break;
                }
                else if(s[i]==ch){
                    rem++;
                    i++;
                }
                else{
                    rem++;
                    j--;
                }
            }
        }
        if(pal)
            ans=min(ans,rem);
    }
    
    cout<<(ans==n ? -1 : ans)<<endl;
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