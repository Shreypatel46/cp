#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string key,s;
        int sum=0;
        cin>>key;
        cin>>s;
        for(int i=0;i<(s.length()-1);i++){
            int x=key.find(s[i])+1;
            int y=key.find(s[i+1])+1;
            sum+=abs(x-y);
        }
        cout<<sum<<endl;
    }
}