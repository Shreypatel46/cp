#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        
        if(a==b)
            cout<<0<<" "<<0<<endl;
        else{
            ll gcd=abs(a-b);
            ll cnt=min(a%gcd,gcd-a%gcd);
            cout<<gcd<<" "<<cnt<<endl;
        }

    }
}