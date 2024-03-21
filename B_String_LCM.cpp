#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        string m,n;
        int r,c,f=0,a;
        if(s1.length()<s2.length()){
            c=s1.length();
            n=s1;
            r=s2.length();
            m=s2;
            a=1;
        }
        else{
            c=s2.length();
            r=s1.length();
            n=s2;
            m=s1;
            a=2;
        }
        for(int i=1;i<=c;i++){
            if(a==1)
                n=s1;
            else
                n=s2;
            for(int j=1;j<=r;j++){
                //cout<<i<<","<<j<<":"<<n<<" "<<m<<endl;
                if(n == m){
                    f=1;
                    cout<<n<<endl;
                    break;
                }
                if(a==1)
                    n=n+s1;
                else
                    n=n+s2;
            }
            if(a==1)
                m=m+s2;
            else
                m=m+s1;
            if(f==1)
                break;
        }
        if(f==0)
            cout<<"-1"<<endl;
        
    }
}