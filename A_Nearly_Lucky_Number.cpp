#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int ln=0,rem;
    while(n){
        rem=n%10;
        n=n/10;
        if(rem==4 || rem==7){
            ln++;
        }
        
    }
    if(ln==4 || ln==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}