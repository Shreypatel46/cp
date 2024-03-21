#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y,a,b;
        cin>>x>>y;
        cin>>a>>b;
        double z=(double)max(a,b)/(double)min(a,b);
        
        ll i=a*(max(x,y)-min(x,y))+ b*min(x,y);
        ll j=(x+y)*a;
        cout<<min(i,j)<<endl;
        
    }
}