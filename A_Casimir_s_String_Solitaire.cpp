#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int hash[3]={0};
        for(int i=0;i<s.length();i++){
            hash[s[i]-'A']++;
        }
        // cout<<hash[0];
        // cout<<hash[1];
        // cout<<hash[2];
        if((s.length())%2==0){
            if(hash[1]==(s.length()/2)&& hash[0]+hash[2]==hash[1]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }   
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}