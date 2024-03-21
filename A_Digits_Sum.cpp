#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,count=0;
        cin>>n;
        if(n==9){
            cout<<1<<endl;
        }
        else{
            if(n%10==9){
                count=n/10 +1;
                cout<<count<<endl;
            }
            else{
                count=n/10;
                cout<<count<<endl;
            }
            
        }
    }

}