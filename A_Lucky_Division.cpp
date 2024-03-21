#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>mp;
    int x=n,res;
    while(x){
        res=x%10;
        mp[res]++;
        x=x/10;
    }
    if(n%4==0 || n%7==0 || n%47==0||n%74==0 ||n%44==0 ||n%77==0 || n%447==0 || n%474==0|| n%444==0|| n%777==0 || n%744==0){
        cout<<"YES"<<endl;
    }
    else{
        int f=0;
        for(auto i : mp){
            if(i.first !=4 &&  i.first != 7){
                cout<<"NO"<<endl;
                f++;
                break;
            }
        }
        if(f==0){
            cout<<"YES"<<endl;
        }

    }

}