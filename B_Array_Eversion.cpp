#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,mx=0,cnt=0;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]>mx){
                mx=a[i];
                cnt++;
            }
        }
        cout<<cnt-1<<endl;
    }
}