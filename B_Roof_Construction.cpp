#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=1;
        while(i*2<=n-1)
            i=i*2;
        for(int j=i-1;j>=0;j--){
            cout<<j<<" ";
        }
        for(int k=i;k<n;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}