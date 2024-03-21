#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans = a + 10;
        for(int i = b; i <= b + 60; ++i) {
        int cur = i - b;
        if (i == 1) continue;
 
        int w = a;
        while(w > 0) {
            w /= i;
            cur++;
        }
 
        ans = min(ans, cur);
        }
        cout << ans << endl;
    }
}
//          int a,b;
//         cin>>a>>b;
//         int f=0;
//         int c=0;
//         while(a!=0){
//             if((a%b==0 && c<2) || (b==2 && a/b!=0)){
//                 b++;
//                 f++;
//                 c++;
//             }
//             else{
//                 a=a/b;
//                 f++;
//             }
            
            
//         }
//         cout<<f<<endl;
