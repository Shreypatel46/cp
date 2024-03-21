#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int,int> a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a,a+n);

        int time=0;
        int ans[n];
        int corr=1;
        for(int i=n-1;i>=0;i-=2){
            int temp=2*corr;
            time =time+temp*a[i].first;
            ans[a[i].second]=corr;
            corr++;
        }
        corr=-1;
        for(int i=n-2;i>=0;i-=2){
            int temp=2*abs(corr);
            time =time+temp*a[i].first;
            ans[a[i].second]=corr;
            corr--;
        }
        cout<<time<<endl<<0<<' ';
        for(int i=0;i<n;i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
}
