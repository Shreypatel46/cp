#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0,f=-1;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)
                f++;
        }
        if(f>=0){
            cout<<0<<endl;
        }
        else{
        for(int i=0;i<n;i++){
              if(a[i]<0)
                {
                    cnt++;
                }
        }
        if(cnt==0){
            cout<<1<<endl<<1<<" "<<0;
        }
        else if(cnt & 1){
            cout<<0;
        }
        else{
            cout<<1<<endl<<1<<" "<<0;
        }
        cout<<endl;
        }
    }
}