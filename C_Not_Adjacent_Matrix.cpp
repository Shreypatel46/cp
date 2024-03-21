#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        if(n==2){
            cout<<-1<<endl;
        }
        else if(n==1){
            cout<<1<<endl;
        }
        else{
            
            for(int i=1;i<=n*n;i=i+2){
                cout<<i<<" ";
                cnt++;
                if(cnt==n){
                    cout<<endl;
                    cnt=0;
                }
            }
            for(int i=2;i<=n*n;i=i+2){
                cout<<i<<" ";
                cnt++;
                if(cnt==n){
                    cout<<endl;
                    cnt=0;
                }
            }
        }
    }
}