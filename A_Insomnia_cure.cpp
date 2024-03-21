#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    if(k==1 ||l==1||m==1||n==1){
         cout<<d;
    }
    else{
        int a[d],res=0;
        for(int i=1;i<=d;i++){
            a[i]=i;
        }
        for(int i=1;i<=d;i++){
            if(a[i]%k==0){
                a[i]=0;
            }
            if(a[i]%l==0){
                a[i]=0;
            }
            if(a[i]%m==0){
                a[i]=0;
            }
            if(a[i]%n==0){
                a[i]=0;
            }
        }
        for(int i=1;i<=d;i++){
            if(a[i]>0){
                res++;
            }
        }
        cout<<d-res<<endl;

    }
}