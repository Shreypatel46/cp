#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,cn2=0,mx=0,sum=0;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            while(a[i]%2==0){
                cn2++;
                a[i]/=2;
            }
            mx=max(mx,a[i]);
            sum+=a[i];
        }
        sum-=mx;
        cout<<sum + mx*(ll)pow(2,cn2)<<endl;
        



    }
}

        // int n;
        // ll sum=0,nsum=0;
        // cin>>n;
        // ll a[n];
        // for(int i=0;i<n;i++){
        //     cin>>a[i];
        //     sum+=a[i];

        // }
        // sort(a,a+n,greater<int>());
        // for(int i=0;i<n;i++){
        //     if((a[i]%2)!=0){
        //         swap(a[0],a[i]);
        //         break;
        //     }
        // }
        // if(n==1)
        //     cout<<sum<<endl;
        // else{
        //     for(int i=1;i<n;i++){
        //         while(a[i]!=1 && a[i]%2==0){
        //             a[i]=a[i]/2;
        //             a[0]=a[0]*2;
        //         }
        //     }
        //     for(int i=0;i<n;i++){
        //         nsum+=a[i];
        //     }
        //     if(nsum>sum)
        //         cout<<nsum<<endl;
        //     else
        //         cout<<sum<<endl;
            
        // }
        