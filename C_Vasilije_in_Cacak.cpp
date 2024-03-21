#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(k*(k+1)<=2*x && (n*(n+1) - (n-k)*(n-k+1)) >=2*x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}