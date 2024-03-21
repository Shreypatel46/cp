#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=2;
        if(is_sorted(v,v+n))
            ans=0;
        else if(v[0]==1 || v[n-1]==n)
            ans=1;
        else if(v[0]==n && v[n-1]==1)    
            ans=3;

        cout<<ans<<endl;    

    }
}