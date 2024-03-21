#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t=1;
    //cin>>t;
    while(t--){
        int sum =0,ans=INT_MIN;
        int a[7]={3,2,-1,4,5,9,1};
        for(int i=0;i<7;i++){
            if(i<7-2)
                sum=a[i]+a[i+1]+a[i+2];
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
    
}