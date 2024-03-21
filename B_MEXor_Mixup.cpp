#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int nxor; // xor of  value from 0 to n-1  
        if(a%4==1)
            nxor=a-1;
        else if(a%4==2)
            nxor=1;
        else if(a%4==3)
            nxor=a;
        else 
            nxor=0;
        
        if(nxor==b)
            cout<<a<<endl;
        else if((nxor^b)!=a)
            cout<<a+1<<endl;
        else 
            cout<<a+2<<endl;
    }
}
//x^y=b
//x^b=y
