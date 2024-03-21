#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n+2);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int cnt=0,hi=1,lo=1;
        while(hi<=n){
            while(v[hi]==v[hi+1]){
                hi++;
            }
            if((lo==1 || v[lo-1]>v[lo]) && (hi==n || v[hi+1]>v[hi])){
                cnt++;
            }
            lo=hi+1;
            hi++;
        }
        if(cnt==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}