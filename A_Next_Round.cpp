#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int nr=0;
    if(a[0]!=0){
        if(a[k-1]!=0){
            nr=k;
            for(int i=k;i<n;i++){
                if(a[k-1]==a[i]){
                    nr=nr+1;
                }
            }   
        }
        else{
            for(int i=0;i<k;i++){
                if(a[i]>0){
                    nr=nr+1;
                }
            }
        }

    }
    else{
        nr=0;
    }
    cout<<nr<<endl;
}