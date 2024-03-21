#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        long double n,k,f;
        int ans;
        cin>>n>>k;
        f=ceil(n/k);
        k=k*f;
        ans=ceil(k/n);
        cout<<ans<<endl;
    }
}