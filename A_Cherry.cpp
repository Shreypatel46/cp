#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n; cin >> n;
        vector<int> a(n);
        for (auto &x: a) {
            cin >> x;
        }
        long long ans = 0;
        for (int i = 1; i < n; i++) {
            ans = max(ans, 1LL * a[i] * a[i - 1]);
        }
        cout << ans << '\n';
    }

}
