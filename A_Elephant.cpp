#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int min=0;
    if(n==1 || n==2||n==3||n==4||n==5){
        min++;
    }
    else{
        while(n){
            n=n-5;
            min++;
            if(n<=5){
                min++;
                break;
            }
        }
    }
    cout<<min<<endl;
    
}