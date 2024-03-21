#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c,win=0;
    while(n--){
        int flag=0;
        cin>>a>>b>>c;
        if(a==1){
            flag=flag+1;
        }
        if(b==1){
            flag=flag+1;
        }
        if(c==1){
            flag=flag+1;
        }
        if(flag>=2){
            win=win+1;
        }
        
    }
    cout<<win<<endl;
}