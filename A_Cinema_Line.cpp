#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n,f=0;
        cin>>n;
        vector<int>v(n);
        int fm=0,am=0,hm=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[i]==25){
                am++;
            }
            else if(v[i]==50){
                if(am==0){
                    f=1;
                    break;
                }
                else
                    am--;
                fm++;
            }
            else if(v[i]==100){
                 if(fm>0 && am>0){
                    fm--;
                    am--;
                }
                else if(am>=3){
                    am=am-3;
                }
                else{
                    f=1;
                    break;
                }
                
                
            }
        }
        if(f==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}