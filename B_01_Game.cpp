#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> mp;
        int a[2],p=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        if(mp.size()==1)
            cout<<"NET"<<endl;
        else{
            a[0]=mp['0'];
            a[1]=mp['1'];
            while(a[0]!=0 && a[1]!=0){
                p++;
                a[0]--;
                a[1]--;
            }
            if(p%2==0)
                cout<<"NET"<<endl;
            else
                cout<<"DA"<<endl;
        
        }
        
    }
}