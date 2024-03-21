#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,cz=0,c1=0;
        cin>>n;
        string s,f;
        cin>>s>>f;
        for(int i=0;i<n;i++){
            if(s[i]!=f[i] && s[i]=='0'){
                cz++;
            }
            else if(s[i]!=f[i] && s[i]=='1'){
                c1++;
            }
        }
        //cout<<cz<<" "<<c1<<endl;
        int ans= max(cz,c1);
        cout<<ans<<endl;
    }
}