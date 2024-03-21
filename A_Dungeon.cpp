#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,sum;
        cin>>a>>b>>c;
        sum=a+b+c;
        //cout<<sum%9<<endl;
        if(sum%9==0 && sum!=0 && min(a,min(b,c))>=sum/9)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
}