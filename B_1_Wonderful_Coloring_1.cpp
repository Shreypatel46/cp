#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int hash[26]={0};
        int d=0,nd=0;
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hash[i]>1)
                d++;
            else if(hash[i]==1)
                nd++;
        }
        if(nd!=0 && d==0)
            cout<<nd/2<<endl;
        else if(nd==0 && d!=0)
            cout<<d<<endl;
        else if(nd!=0 && d!=0)
            cout<<d+(nd/2)<<endl;

    }
}