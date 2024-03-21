#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin >> n;
        vector<int>v(n);
        //map<int, int>m;
        bool h = 0;
        for (int i = 0;i < n;i++)
        {
            cin >> v[i];
        }
        for (int i = 0;i < n-2;i++)
        {
            if (v[i] == v[i + 2])
            {
                h = 1;
                break;
            }
            //int m=min_element;
            for (int j = i + 2;j < n;j++)
            {
                if (v[i] == v[j])
                {
                    h = 1;
                    break;
                }
            }
            if (h)
                break;
        }
        if (h)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
}