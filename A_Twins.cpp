#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        sum+=temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),greater<int>());
    int f=0,tsum=0;
    for(int i=0;i<n;i++){
        tsum+=v[i];
        if(tsum>(sum-tsum)){
            f++;
            cout<<f<<endl;
            break;
        }
        else{
            f++;
        }
    }
}