#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1000000000000L;
unordered_set<int> cubes;
void precal(){
    for(int i=1;i*i*i<=N;i++){
        cubes.insert(i*i*i);
    }
}
signed main(){
    precal();
    int t;
    cin>>t;
    while(t--){
        int n,f=0;
        cin>>n;
        for(int i=1;i*i*i<=n;i++){
            if(cubes.count(n-i*i*i)){
                cout<<"YES"<<endl;
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<"NO"<<endl;
        }   
    }
}