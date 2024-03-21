#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,cz=0,c1=0;;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)
                cz++;
            else if(a[i]==1)
                c1++;
        }
        if(cz>=n/2){
            cout<<cz<<endl;
            for (int i = 0; i <cz; i++)
            {
                cout<<0<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<c1-c1%2<<endl;
            for (int i = 0; i <c1-c1%2; i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }

}