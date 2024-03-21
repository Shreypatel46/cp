#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],c=0,no=1,sum=0;;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
            sort(a,a+n);
            for(int i=n-1;i>=0;i--){
                sum+=a[i];
                if((sum/(no*1.0))>=x){
                    c++;
                    no++;
                }
                else
                    break;
            }
            cout<<c<<endl;
        
    }
}