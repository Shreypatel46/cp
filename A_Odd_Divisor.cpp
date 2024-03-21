#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,f=0;
        cin>>n;
        if(n%2!=0)
            cout<<"YES"<<endl;
        else {
            while(n>=1){
                n=n/2;
                if(n!=1 && n%2!=0){
                    f=1;
                    break;
                }
            }
            if(f)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}   