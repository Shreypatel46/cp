#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m,res;
    cin>>n>>m;
    vector<ll> a(m);
    for(ll i=0;i<m;i++){
        cin>>a[i];
    }
    res=a[0]-1;
    for(ll i=1;i<m;i++){
        if(a[i-1]>a[i]){
            res=res+abs(n-a[i-1]) + a[i];
        }
        else if(a[i-1]<=a[i]){
            res=res+ a[i]-a[i-1];
        }
    }
    cout<<res<<endl;

}