#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,a,b,n;
    vector<int> v;
    cin>>x;
    while(x){
        cin>>a>>b>>n;
        int c=0;
        while(a<=n && b<=n){
            if(a<b){
                a+=b;
                c++;
            }
            else{
                b+=a;
                c++;
            }
        }  
        v.push_back(c);
        x--;

    }
    for(auto i:v){
        cout<<i<<endl;
    }
    
}