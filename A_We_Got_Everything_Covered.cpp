#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        string tp = "abcdefghijklmnopqrstuvwxyz";
        while(n--)
        {
            for(int i=0;i<k;i++)
            {
                cout<<tp[i];
            }
        }
        cout<<endl;
    }
}