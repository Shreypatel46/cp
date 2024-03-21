#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n],cz=0,co=0,cn=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)
                cz++;
            else if(a[i]==1)
                co++;
            else
                cn++;    
        }
        cout << (1ll << cz) * (ll)co << '\n';
        cout<<((ll)pow(2,cz))*co<<endl;;


    }
}
// int fact(int n)
// {
//       if(n==0)
//       return 1;
//     ll res = 1;
//     for (ll i = 2; i <= n; i++)
//         res = res * i;
//     return res;
// }
// int nCr(ll n, ll r)
// {
//     return fact(n) / (fact(r) * fact(n - r));
// }
// res=co;
//res+=co*nCr;