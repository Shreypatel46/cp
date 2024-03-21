#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        //,mx=INT32_MAX,mi=INT32_MIN;
        cin >> n;
        vector<int> v1, v2, v;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int first, second;
            cin >> first >> second;
            if (first == 1)
            {
                v1.push_back(second);
                // if(second>=mi)
                //     mi=second;
            }
            if (first == 2)
            {
                v2.push_back(second);
                // if(second<=mx)
                //     mx=second;
            }
            if (first == 3)
            {
                v.push_back(second);
            }
        }
        int ma = *max_element(v1.begin(), v1.end());
        int mb = *min_element(v2.begin(), v2.end());

        if (mb < ma)
        {
            cout << 0 << endl;
            /*for (auto it : v)
            {
                if (it <= mx && it >= mi)
                {
                    cnt++;
                }
            }
            cout << (mx - mi - cnt) + 1 << endl;*/
        }
        else
        {
            for (auto it : v)
            {
                if (it <= mb && it >= ma)
                {
                    cnt++;
                }
            }
            cout << (mb - ma) - cnt + 1 << endl;
        }
    }
}