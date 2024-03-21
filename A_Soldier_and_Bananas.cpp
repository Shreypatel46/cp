#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    
    int k,n,w,sum=0,borrow;
    cin>>k>>n>>w;
    while(w){
        sum=sum + w*k;
        w--;
    }
    if(sum>n){
       borrow=sum-n;
       cout<<borrow<<endl; 
    }
    else{
        cout<<0;
    }
}