#include<iostream>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2-1<<" "<<1<<endl;
        }
        else{
            int x=n/2;
            if(x%2==0){
                cout<<x-1<<" "<<x+1<<" "<<1<<endl;
            }
            else{
                cout<<x-2<<" "<<x+2<<" "<<1<<endl;
            }
        }
    }
}