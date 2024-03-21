#include<bits/stdc++.h>
using namespace std;
int main(){
    int ti;
    cin>>ti;
    while(ti--){
        int n,m,ct=0,bt=0,st=0;
        string s,t;
        cin>>n>>m;
        cin>>s;
        cin>>t;
        if(n==1 && m==1){
            cout<<"Yes"<<endl;
            continue;
            
        }
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                st++;
            }
            else{
                break;
            }
        }
        if(st==n-1){
            cout<<"Yes"<<endl;
            continue;
        }
        for(int i=1;i<m;i++){
            if(t[i]==t[i-1]){
                cout<<"No"<<endl;
                break;
            }
            else{
                ct++;
            }
        }
        if(ct==m-1){
            for(int i=1;i<n;i++){
                if(s[i]==s[i-1]){
                    if(s[i]==t[m-1] || s[i-1]==t[0]){
                        cout<<"No"<<endl;
                        bt++;
                        break;
                    }
                }
            }
            if(bt==0){
                cout<<"Yes"<<endl;
            }
        }
        
    }
}