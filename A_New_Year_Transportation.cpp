#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,t;
    cin>>n>>t;
    vector<ll> v(n);
    for(int i=1;i<n;i++){
        cin>>v[i];
    }
    int i=1,f=0;
    while(i<=t){
        if(t==i){
            cout<<"YES"<<endl;
            f=1;
            break;
        }
        i=i+v[i];
    }
    if(f==0){
        cout<<"NO"<<endl;
    }
    
}