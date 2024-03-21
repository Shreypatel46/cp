#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x,msum=0,misum,tsum=0;
        cin>>n>>x;
        vector<ll> a;
        for(int i=0;i<n;i++){
            ll temp;
            cin>>temp;
            a.push_back(temp);
            tsum+=temp;
            msum+=ceil((double)temp/x);
        }
        misum=ceil((double)tsum/x);
        cout<<misum<<" "<<msum<<endl;
    }
}