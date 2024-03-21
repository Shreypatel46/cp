#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,h,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<s.length();i++){
       if(s[i-1]==s[i]){
            count++;
       }
    }
    cout<<count<<endl;
    
}