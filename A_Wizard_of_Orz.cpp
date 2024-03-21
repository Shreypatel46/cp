#include<iostream>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1)
            cout<<9;
        else if(n==2)
            cout<<98;
        else if(n==3)
            cout<<989;
        else{
            cout<<989;
            int x=n-3,cnt=0;
            while(x!=0){
                if(cnt>9)
                    cnt=0;
                cout<<cnt;
                cnt++;
                x--;
            }
        }
        cout<<endl;
    }
}