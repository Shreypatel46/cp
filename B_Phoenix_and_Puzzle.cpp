#include<bits/stdc++.h>
using namespace std;
#define int long long
bool sq(int x){
    int y=sqrt(x);
    return y*y==x;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2)
            cout<<"YES"<<endl;
        else{
            if(n%2==0 && sq(n/2))
                cout<<"YES"<<endl;
            else if(n%4==0 && sq(n/4))
                    cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
                
        }
    }
}