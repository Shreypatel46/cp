#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,cnt=0;
        cin>>a>>b;
        int kx,ky;
        cin>>kx>>ky;
        int qx,qy;
        cin>>qx>>qy;
        set<pair<int,int>> vk,vq;
        int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

        for(int j = 0; j < 4; j++){
            vk.insert({kx+dx[j]*a, ky+dy[j]*b});
            vq.insert({qx+dx[j]*a, qy+dy[j]*b});
            vk.insert({kx+dx[j]*b, ky+dy[j]*a});
            vq.insert({qx+dx[j]*b, qy+dy[j]*a});
        }
        
        for(auto i :vk){
            if(vq.find(i) !=vq.end())
                cnt++;
        }
        cout<<cnt<<endl;        
    }
}