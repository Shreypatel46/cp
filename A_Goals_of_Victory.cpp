#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ef;
        cin>>n;
        int sum=0;
        for(int i=0;i<n-1;i++){
            int temp;
            cin>>temp;
            sum+=temp;
        }
        ef=sum*-1;
        cout<<ef<<endl;
    }
}
