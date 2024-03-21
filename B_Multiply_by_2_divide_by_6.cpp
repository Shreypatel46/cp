#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int solve(ll n){
    int count=0,f=1;
    if(n==1)
        return count;
    while(f){
    if(n%3==0){
        if(n%6==0){
            n=n/6;
            count++;
            if(n==1){
                f=0;
                break;
                
            }
        }
        else{
            n=n*2;
            count++;
        }
    }
    else{
        count=-1;
        f=0;
        break;
    }
    }
    return count;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll result=solve(n);
        cout<<result<<endl;

    }
}