#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> prime;
bool ar[100001];
void sieve(){
    ar[0]=ar[1]=true;
    for(int i=2;i<100001;i++){
        if(ar[i]==false){
            for(int j=i*i;j<100001;j+=i){
                ar[j]=true;

            }
        }
    }
    for(int i=2;i<100001;i++){
        if(ar[i]==false){
            prime.push_back(i);
        }
    }
}
signed main(){
    sieve();
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int p,q;
        bool v1,v2,ans;
        v1=true;
        v2=ans=false;
        for(int i=0;i<100001;i++){
            if(prime[i]-1>=d && v1){
                v1=false;
                p=prime[i];
                v2=true;
            }
            else if(prime[i]-p >=d && v2){
                q=prime[i];
                ans=true;
                break;
            }
        }
        if(ans){
            cout<<p*q<<endl;
        }
    }
}