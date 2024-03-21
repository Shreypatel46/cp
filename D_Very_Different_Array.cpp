#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(b,b+m);
        int sum=0,sa=0,ea=n-1,sb=0,eb=m-1;
        while(sa<=ea){
            int left=abs(a[sa]-b[eb]);
            int rigth=abs(a[ea]-b[sb]);
            if(left>=rigth){
                sum+=left;
                sa++;eb--;
            }
            else{
                sum+=rigth;
                ea--;sb++;
            }
        }
        
        cout<<sum<<endl;
    }
}