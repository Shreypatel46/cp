#include<iostream>
using namespace std;
#define int long long
signed main(){
    string n;
    cin>>n;
    int x=n.length();
    int i=0,cnt=0;
    while(i<x){
        if(n[i]=='1' && n[i+1]=='4' && n[i+2]=='4' && i+1<=x && i+2<=x){
            cnt+=3;
            i+=3;
        }
        else if(n[i]=='1' && n[i+1]=='4' && i+1<=x){
            cnt+=2;
            i+=2;
        }
        else if(n[i]=='1'){
            cnt+=1;
            i+=1;
        }
        else
            i++;
    }
    if(x==cnt)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}