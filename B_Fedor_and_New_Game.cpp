#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n,m,k,j=0;
        cin>>n>>m>>k;
        vector<int>v(m+1);
        for(int i=0;i<=m;i++){
            cin>>v[i];
        }
        for(int i=0;i<m;i++){
            if(__builtin_popcount(v[i]^v[m]) <=k)
                j++;
        }
        cout<<j<<endl;
    }
}