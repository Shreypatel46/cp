#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,mi=INT_MAX,ans=INT_MAX,c=0,tp,tl=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=k;j<=20;j=j+k){
                if((j-a[i])>=0)
                    mi=min(mi,j-a[i]);
            }
            if(k==4){
                if(a[i]%2==0){
                    c++;
                }
                
            }
            ans=min(ans,mi);
        }
        tp=max(tl,2-c);
        if(k==4){
            ans=min(ans,tp);
            cout<<ans<<endl;
        }
        else
            cout<<ans<<endl;

    }
}