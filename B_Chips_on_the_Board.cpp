#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,ma=INT32_MAX,mb=INT32_MAX;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<ma)
                ma=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]<mb)
                mb=b[i];
        }
        int suma=0,sumb=0;
        for(auto i :a)
                suma=suma+i;
        for(auto i :b)
                sumb=sumb+i;
        cout<<min(sumb+n*ma,suma+n*mb)<<endl;
        
    }
}