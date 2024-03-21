#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=sqrtl(n);
        if(ans*ans==n)
            cout<<ans-1<<endl;
        else
            cout<<ans<<endl;
    }
}   