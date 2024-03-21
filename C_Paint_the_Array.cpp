#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=-1,c=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            if((a[i+1]%a[i]!=0)&& (a[i-1]%a[i]!=0 && i>0)){
                for(int j=i+2;j<n;j++){
                    if(a[j]%a[i]==0){
                        c++;

                    }
                    if(c>0)
                        ans=a[i];
                    else
                        ans=0;
                }
            }
        }
        cout<<ans<<endl;
    }
}