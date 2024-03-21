#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()%2!=0){
            cout<<"NO"<<endl;
        }
        else
        {
            int x=s.length()/2;
            if(s.substr(0,x)==s.substr(x,x)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }


        }
    }
}