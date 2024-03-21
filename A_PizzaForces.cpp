#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll res=n*2.5;
        if(res<=15)
            cout<<15<<endl;
        else if(res>15 && res<=20)
            cout<<20<<endl;
        else if(res>20 && res<=25)
            cout<<25<<endl;
        else {
            if(n%2!=0){
                n++;
                res=n*2.5;
            }
            cout<<res<<endl;
        }
    }
}