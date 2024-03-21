#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>> v;
        for(int i=0;i<4;i++){
            int first,second;
            cin>>first>>second;
            v.push_back({first,second});
        }
        sort(v.begin(),v.end());
        cout<<abs(v[0].first-v[2].first)*abs(v[0].second-v[1].second)<<endl;

        


    }
}