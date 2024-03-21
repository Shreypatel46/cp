#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)
                a[i]++;
        }
        for(int i=1;i<n;i++){
            if(a[i]%a[i-1]==0){
                a[i]++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
                
        
    }
}
// ll op= 2*n;
//         ll tp=0;
//         ll ap=0;
//         while(tp<=op){
//             ll ap=0;
//             for(int i=1;i<n;i++){
//                 if(a[i]%a[i-1]==0){
//                     a[i-1]=a[i-1]+1;
//                     tp++;
//                     if(i<n-1 && a[i]==a[i+1]){
//                         a[i]=a[i]+1;
//                         tp++;
//                     }
//                 }
//                 else if(i<n-1 && a[i]==a[i+1]){
//                     a[i]=a[i]+1;
//                     tp++;
//                 }
//                 else{
//                     ap++;
//                 }
//             }
//             if(ap==n-1){
//                 for(int i=0;i<n;i++){
//                     cout<<a[i]<<" ";
//                 }
//                 cout<<endl;
//                 break;
//             }

//         }
        