#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x=s.length();
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
}