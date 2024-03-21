#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll l1,l2,l3;
        cin>>l1>>l2>>l3;
        if(l1==l2){
            if(l3%2==0)
                cout<<"YES"<<endl;  
            else
                cout<<"NO"<<endl; 
        }
        else if(l3==l2){
            if(l1%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;    
        }
        else if(l1==l3){
            if(l2%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;    
        }
        else{
           if(l1>l2 && l1>l3){
                if((l1-l2-l3)==0)
                    cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl; 
           }
           if(l3>l2 && l3>l1){
                if((l3-l2-l1)==0)
                    cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl; 
           }
           if(l2>l1 && l2>l3){
                if((l2-l1-l3)==0)
                    cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl; 
           }
        }

    }
}