#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll sum=0;
        ll b;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n==0)
            cout<<0<<endl;
        else{
            b=sum%n;
            b*=(n-b);
            cout<<b<<endl;
        }
    }
}