#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,f=0;
        cin>>n;
        if(n==1){
            cout<<-1<<endl;
            continue;
        }
        
        if(n%2==0){
           string ans="23";
           n=n-2;
           int x=n/2; 
           while(n && x){
                ans=ans+"33";
                x--;
           }
           cout<<ans<<endl;
        }
        else{
           string ans="2";
           n=n-1;
           int x=n/2; 
           while(n && x){
                ans=ans+"33";
                x--;
           }
           cout<<ans<<endl; 
        }
    
        
    }
}