#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,char>con;
        con['R']='B';
        con['B']='R';
        string ans="";
        for(int i=0;i<n;i++){
            while(i<n && s[i]=='?')
                i++;
            if(i==n)
                break;
            if((i-ans.size())%2){
                char cons=s[i];
                for(int j=ans.size();j<=i;j++){
                    ans+=con[cons];
                    cons=con[cons];
                }
            }
            else {
                char cons=con[s[i]];
                for(int j=ans.size();j<=i;j++){
                    ans+=con[cons];
                    cons=con[cons];
                }
            }
        }
        if(ans.size()==0){
            char c='B';
            for(int i=0;i<n;i++){
                ans+=c;
                c=con[c];
            }
        }
        while(ans.size()<n){
            int last =ans.size();
            ans+=con[ans[last-1]];
        }
        cout<<ans<<endl;

    }       
}