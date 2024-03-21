#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<2020)
            cout<<"NO"<<endl;
        else{
        int dig=n%2020;
        float z=float((n-dig))/2020;
        float x=(n-dig)/2020;
        if(x==z){
            int temp=z-dig;
            if(temp>=0  && (2020*temp+2021*dig==n))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
        else
            cout<<"NO"<<endl;
        }
        
    }
}