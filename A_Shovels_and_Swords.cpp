#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c=0;
        cin>>a>>b;
        cout<<min(min(a,b),(a+b)/3)<<endl;
    }
}