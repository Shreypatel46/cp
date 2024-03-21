#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,nc;
    cin>>t;
    while(t){
        cin>>nc;
        int w[nc],fc=0,sc=0,sum=0;
        for(int i=0;i<nc;i++){
            cin>>w[i];
            sum+=w[i];
            if(w[i]==1){
                fc++;
            }
            else{
                sc++;
            }
        }
        if(fc%2==0 && sc%2==0 && sum%2==0){
            cout<<"YES"<<endl;
        }
        else if(fc!=0 && sc!=0 && (fc%2==0 || sc%2==0) && sum%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}