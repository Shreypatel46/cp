#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=0;
        for(int k=1;k<=n/2;k++){
            if(n%k==0){
                ll cur=0;
                ll mx=0,mn=1e15;
                for(int i=1;i<=n;i++){
                    cur+=v[i-1];
                    if(i%k==0){
                        mx=max(mx,cur);
                        mn=min(mn,cur);
                        cur=0;
                    }
                }
                ans=max(ans,mx-mn);
            }
        }
        cout<<ans<<endl;
    }
}