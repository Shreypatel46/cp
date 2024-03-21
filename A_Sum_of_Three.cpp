#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x,y,z;
        cin>>n;
        x=1;
        y=2;
        while(1){
            z=n-x-y;
            if(z%3==0 || y%3==0 || z==y){
                y++;
                z--;
                if(y==n){
                    x++;
                    y=x+1;
                }
                if(z<=1){
                    cout<<"NO"<<endl;
                    break;
                }
            }
            else if(n=x+y+z && x!=y && y!=z && z!=x){
                cout<<"YES"<<endl;
                cout<<x<<" "<<y<<" "<<z<<" "<<endl;
                break;
            }

        }


    }
}