#include<bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t){
        ll n;
        cin>>n;
        if(n%3==0){
            cout<<n/3<<" "<<n/3<<endl;
        }
        else{
           ll c1,c2;
           c1=(n+2)/3;
           c2=c1-1;
           if(c1+2*c2==n){
            cout<<c1<<" "<<c2<<endl;
           }
           else{
            swap(c1,c2);
            cout<<c1<<" "<<c2<<endl;
           }
        }
        t--;
    }
}