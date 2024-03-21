#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t=1;
    //cin>>t;
    while(t--){
        string s;
        int f=0;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                s.erase(i,1);
                f=1;
                break;
            }
            
        }
        if(f==0){
            s.erase(0,1);
        }
        cout<<s<<endl;
    }
}