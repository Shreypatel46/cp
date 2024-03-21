#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        ll op;
        op=a[0]-a[n-1];
        cout<<op<<endl;
    }
}