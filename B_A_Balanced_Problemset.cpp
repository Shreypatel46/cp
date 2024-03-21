#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> x >> n;
        if (x == n)
        {
            cout << 1 << endl;
        }
        else if (x % n == 0)
        {
            cout << x / n << endl;
        }
        else
        {
            /*int tp= x/n + x%n;
            int t1=x/n;
            while(t1){
                if(tp%t1==0){
                    cout<<t1<<endl;
                    break;
                }
                t1--;

            }*/
            vector<int>v;
            for (int i = 1; i <= n ; i++)
            {
                int temp = x;
                int t2 = n;
                temp -= i;
                t2--;
                int a=temp%t2;
                int b=temp/t2;
                if (a==0)
                {
                    int z1=min(b,temp/b);
                    //cout<<i<<" "<<temp/b<<endl;
                    v.push_back(gcd(i,z1));
                }
            }
            cout<<*max_element(v.begin(),v.end());
            cout<<endl;
           /*for(auto it : v)
            cout<<it<<" ";
            cout<<endl;*/
        }
    }
}