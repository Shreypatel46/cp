#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int  main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,count=0;
        cin>>n;
        while(n){
            n=n/2;
            count++;
        }
        ll k=pow(2,count-1)-1;
        cout<<k<<endl;

        
    }
}