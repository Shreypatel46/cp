#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        int min=v[0];
        for(auto i:v){
            min&=i;
        }
        cout<<min<<endl;
    }
}