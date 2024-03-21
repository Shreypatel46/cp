#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        int s;
        cin>>s;
        if((s/2)%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            int a[s],sume=0,sumo=0;
            for(int i=0;i<s/2;i++){
                a[i]=2+2*i;
                sume+=a[i];
            }
            int j=0;
            for(int i=s/2;i<s-1;i++){
                a[i]=1+2*j;
                j++;
                sumo+=a[i];
            }
            if((sume-sumo)%2!=0){
                a[s-1]=sume-sumo;
            }
            cout<<"YES"<<endl;
            for(int i=0;i<s;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;


        }
        t--;
    }
}