#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>45)
            cout<<-1<<endl;
        else if(x<10)
            cout<<x<<endl;
        else{
            int d=9,res=x;
            string s1,s2,s3;
            while(d<res){
                res=res-d;
                s2=to_string(d);
                s1=s2+s1;
                d--;
                if(d>=res){
                    s3=to_string(res);
                    s1=s3+s1;
                    break;
                }
            }
            cout<<s1<<endl;
        }
        
    }
}