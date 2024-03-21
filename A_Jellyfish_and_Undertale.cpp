#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n,tp;
        cin>>a>>b>>n;
        vector<int>v(n);
        int cnt=b;
        for(int i=0;i<n;i++){
            cin>>v[i];
            cnt=cnt+min(v[i],a-1);
        }
        cout<<cnt<<endl;
    }
}