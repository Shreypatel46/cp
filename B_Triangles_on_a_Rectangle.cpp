#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        vector<int> h1,h2,v1,v2;
        int a,b,c,d;
        cin>>a;
        for(int i=0;i<a;i++){
            int first;
            cin>>first;
            h1.push_back(first);
        }
        cin>>b;
        for(int i=0;i<b;i++){
            int first;
            cin>>first;
            h2.push_back(first);
        }
        cin>>c;
        for(int i=0;i<c;i++){
            int second;
            cin>>second;
            v1.push_back(second);
        }
        cin>>d;
        for(int i=0;i<d;i++){
            int second;
            cin>>second;
            v2.push_back(second);
        }
        int a1=(h1[a-1] - h1[0])*h;
        int b1=(h2[b-1] - h2[0])*h;
        int c1=(v1[c-1] - v1[0])*w;
        int d1=(v2[d-1] - v2[0])*w;
        int m1=max(a1,b1);
        int m2=max(c1,d1);
        int ans=max(m1,m2);
        cout<<ans<<endl;

    }
}
// int answer=0;
        // if(ans==m1){
        //     if(ans==a1){
        //     answer=abs(a1*h);
        //     }
        //     else if(ans==b1){
        //         answer=abs(b1*h);
        //     } 
        // }
        // else if()
        // if(ans==a1){
        //     answer=abs(a1*h);
        // }
        // else if(ans==b1){
        //     answer=abs(b1*h);
        // }
        // else if(ans==c1){
        //     answer=abs(c1 *w);
        // }
        // else if(ans=d1){
        //     answer=abs(d1*w);
        // }
        