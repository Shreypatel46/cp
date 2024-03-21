#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=n-1;
        for(int i=0;i<n;i++){
           if(s[i]=='B')
             ans--;
           else 
             break; 
        }
        for(int i=n-1;i>=0;i--){
           if(s[i]=='A')
             ans--;
           else 
             break; 
        }
        if(ans>=0)
            cout<<ans<<endl;
        else
            cout<<0<<endl;
    }
}
// int a[n]={0};
//         while(i<n-1){
//             if(s[i] =='A' && s[i+1] =='B'){
//                 swap(s[i],s[i+1]);
//                 cnt++;
//                 a[i]++;
//             }
//             if(s[j] =='A' && s[j+1] =='B' && a[j]==0){
//                 swap(s[j],s[j+1]);
//                 cnt++;
//                 a[j]++;
                
//             }
//             i++;
//             j=i-1;  
            
//         }
//         cout<<cnt<<endl;