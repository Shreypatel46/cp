#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,domino;
    cin>>m>>n;
    if(m%2!=0 && n%2!=0){
        if(m>=n){
            domino=n/2 + n*(m/2);
        }
        else{
            domino=m/2 + m*(n/2);
        }
    }
    else if(m%2==0 && n%2==0){
        domino=(m/2)*n;
    }
    else{
        if(m%2==0){
            domino=(m/2)*n;
        }
        else{
            domino=(n/2)*m;
        }
    }
    cout<<domino<<endl;
        
}