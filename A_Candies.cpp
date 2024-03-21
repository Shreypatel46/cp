#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=2,x;
        while(k){
            int p =pow(2,k)-1;
            if(n%p==0){
                x=n/p;
                cout<<x<<endl;
                break;
            }
            else{
                k++;
            }
        }
        




    }
}