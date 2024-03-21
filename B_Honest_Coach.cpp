#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int min_dif=INT16_MAX,dif,a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
                dif=a[i+1]-a[i];
                if(dif<min_dif){
                    min_dif=dif;
                }
        }
        cout<<min_dif<<endl;
        t--;
        
    }
}