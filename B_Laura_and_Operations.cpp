#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b && b==c){
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else if(a==c)
            cout<<0<<" "<<1<<" "<<0<<endl;
        else if(b==c)
            cout<<1<<" "<<0<<" "<<0<<endl;
        else if(a==b)
            cout<<0<<" "<<0<<" "<<1<<endl;
        else if(a>b && a>c)
            cout<<1<<" "<<0<<" "<<0<<endl;
        else if(b>a && b >c)
            cout<<0<<" "<<1<<" "<<0<<endl;
        else
            cout<<0<<" "<<0<<" "<<1<<endl;
    }
}