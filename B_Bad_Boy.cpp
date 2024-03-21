#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,i,j;
        cin>>n>>m>>i>>j;
        // if(n==1 && m==1){
        //     cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
        // }
        // else if((n==1 && m==2)||(n==2 && m==1)){
        //     cout<<n-i+1<<" "<<m-j+1<<" "<<n-i+1<<" "<<m-j+1<<endl;
        // }
        // else if(n==i && j==1 && n>2){
        //     cout<<n-1<<" "<<1<<" "<<1<<" "<<m<<endl;
        // }
        // else if(i==1 && m==j && n>2){
        //     cout<<n<<" "<<1<<" "<<1+1<<" "<<m<<endl;
        // }
        // else if(n==i && j==1 && m>2){
        //     cout<<n+1<<" "<<1<<" "<<1<<" "<<m<<endl;
        // }
        // else if(i==1 && m==j && m>2){
        //     cout<<n<<" "<<1<<" "<<1<<" "<<m-1<<endl;
        // }
        else{
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        }
    }
}