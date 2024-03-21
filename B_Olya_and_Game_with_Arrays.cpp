#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
 
using namespace std;
 
#define all(v) v.begin(), v.end()
 
typedef long long ll;
 
const int INF = 1e9 + 7;
 
void solve() {
    int n;
    cin >> n;
 
    int minn = INF;
    vector<int> min2;
    for (int i = 0 ; i < n ; i++) {
        int m;
        cin >> m;
        vector<int> v(m);
        for (auto &el : v) cin >> el;
 
        int minel = *min_element(all(v));
        minn = min(minn, minel);
        v.erase(find(all(v), minel));
        min2.push_back(*min_element(all(v)));
    }
    cout << minn + (ll) accumulate(all(min2), 0ll) - *min_element(all(min2)) << "\n";
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}













// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define all(v) v.begin(),v.end()
// signed main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,mi=INT_MIN;
//         cin>>n;
//         vector<int> v;
//         for(int i=0;i<n;i++){
//             int m;cin>>m;
//             vector<int> subv(m);
//             for(auto &it : subv)
//                 cin>>it;
//             int milist=*min_element(all(subv));
//             int mi=min(mi,milist);
//             subv.erase(find(all(subv),milist));
//             v.push_back(*min_element(all(subv)));
//         }
//         cout<<mi+(int)accumulate(all(v),0ll) - *min_element(all(v))<<endl;
//     }
// }