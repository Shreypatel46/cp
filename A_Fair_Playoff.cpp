#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int v[4];
        for(int i=0;i<4;i++){
            cin>>v[i];
        }
        int m1,m2;
        if(v[0]>v[1]){
            m1=v[0];
        }
        else{
            m1=v[1];
        }
        if(v[2]>v[3]){
            m2=v[2];
        }
        else{
            m2=v[3];
        }
        sort(v,v+4,greater<int>());
        if((v[0]==m1 && v[1]==m2) || (v[0]==m2 && v[1]==m1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}