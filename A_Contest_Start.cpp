#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int k;
    cin>>k;
    while(k--){
        int n,x,t;
        cin>>n>>x>>t;
        int z=t/x;
        int sz=z*(z+1)/2;
        if(z>n){
            cout<<(n-1)*n/2<<endl;
        }
        else
           cout<<n*z -sz<<endl;
    }
}