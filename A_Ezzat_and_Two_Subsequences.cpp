#include<bits/stdc++.h>
using namespace std;
#define ld long double
int main(){
    int t;
    cin>>t;
   while (t--)
    {
        cout<<setprecision(9);
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int m2=v[0];
        long long sum=0;
        for(int i=0;i<n;i++){
            if(v[i]>m2){
                m2=v[i];
            }
            sum+=v[i];
        }
        cout<<1.0*(sum-m2)/(n-1)+m2<<"\n";
		    
    }
    
}
