#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            for(int i=n;i>=1;i--){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
           for(int i=n;i>=1;i--){
                if(i!=(n-n/2)){
                    cout<<i<<" ";
                }
            }
            cout<<n-n/2<<endl;
        }
    }
}