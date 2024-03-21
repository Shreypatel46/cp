#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f=0;
        cin>>n;
        string s;
        string s1="()";
        cin>>s;
        int x=s.find(s1);
        while(x!= string::npos){
            s=s.erase(x,2);
            if(s.empty()){
                cout<<0<<endl;
                f++;
                break;
            }
            x=s.find(s1);
        }
        int z=s.length(),cnt=0;
        for(int i=0;i<z;i++){
            if(s[i]==')')
                cnt++;
        }
        if(f==0)
            cout<<cnt<<endl;

    }
}