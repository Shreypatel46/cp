#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n==1)
        return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(isprime(n)){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<1<<" ";
                }
                cout<<endl;
            }        
        }
        else if(n%2==0){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j || j==n-i-1){
                        cout<<1<<" ";
                    }
                    else{
                        cout<<0<<" ";
                    }
                }
                cout<<endl;
            }            
        }
        else{
             for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j ||(i==n/2 && j==i-1) || (j==n/2 && i==j-1) || j==n-i-1){
                        cout<<1<<" ";
                    }
                    else{
                        cout<<0<<" ";
                    }
                }
                cout<<endl;
            }            
           

        }

    }
}