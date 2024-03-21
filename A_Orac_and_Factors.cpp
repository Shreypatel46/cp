#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll isodd(ll n){
    if(n==1)
        return n;
    for(ll i=2;i<=n;i++){
        if(n%i==0)
            return i;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,res;
        cin>>n>>k;
        res=n;
        
            if(res%2==0){
                res=res+2*k;
            }
            else{
                res=res+isodd(res)+2*(k-1);
            }
            cout<<res<<endl;
    }
        
    
}