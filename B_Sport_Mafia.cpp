#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n,k,sum=0,res;
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            sum+=i;
            if(sum-(n-i)==k){
                res=sum-k;
                break;
            }
        }
        cout<<res<<endl;
    }
}