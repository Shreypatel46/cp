#include<iostream>
using namespace std;
int main(){
    int w,a;
    cin>>w;
    a=2;
    int flag=-1;
    while(a<=w/2){
        if((w-a)%2==0){
            flag++;
        }  
        a=a+2; 
    }
    if(flag>=0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}