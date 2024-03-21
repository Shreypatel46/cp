#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f=0,t=0;
        cin>>n;
        string s;
        cin>>s;
        for(char c='A';c<='Z';c++){
            int start=n,last=-1;
            for(int i=0;i<n;i++){
                if(s[i]==c){
                    start=min(start,i);
                    last=max(last,i);
                }
            }
            for(int i=start;i<=last;i++){
                if(s[i]!=c){
                    cout<<"NO"<<endl;
                    f++;t++;
                    break;
                }
            }
            if(f>0)
                break;
        }
        if(t==0)
            cout<<"YES"<<endl;
        
    }
}