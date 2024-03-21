#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h=0,tp;
    cin>>n;
    while(n)
    {
        cin>>tp;
        if(tp==1){
            h++;
        }
        n--;
    }
    if(h>=1){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }

}