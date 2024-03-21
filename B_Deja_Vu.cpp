#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll a[n],x[q];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<q;i++){
            cin>>x[i];
        }
        map<ll,ll> mp;
        for(int i=0;i<q;i++){
            if(mp[x[i]]) continue;
            ll j=x[i];
            for(int k=0;k<n;k++){
                ll pp=pow(2,j);
                if(a[k]%pp==0){
                    ll x=pow(2,j-1);
                    a[k]+=x;
                }
            }
            mp[x[i]]=1;
        } 
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        } 
        cout<<endl;
    }
}