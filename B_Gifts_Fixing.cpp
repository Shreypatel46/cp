#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        int n,a1=1000000000,b1=1000000000;
        long long move=0;
        cin>>n;
        long long a[n],b[n];
        unordered_map<int,int> m1,m2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if (a[i] < a1) {
            a1= a[i];
        }
            m1[a[i]]++;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if (b[i] < b1) {
            b1=b[i];
        }
            m2[b[i]]++;
        }
        if(m1.size()==1 && m2.size()==1){
            cout<<0<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if((a[i]-a1)>=(b[i]-b1)){
                    move+=a[i]-a1;
                    //<<"move is "<<move<<endl;
                }
                else{
                    move+=b[i]-b1;
                    //cout<<"move is "<<move<<endl;
                }
            }
            cout<<move<<endl;
        }
        
        t--;
    }
}