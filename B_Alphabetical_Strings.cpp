#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        size_t t=s.find('a');
        if(t==string::npos){
            cout<<"NO"<<endl;
            continue;
        }
        size_t n=s.length(),r=t;
        bool yes =true;
        for(int i=1;i<n;i++){
            size_t pos=s.find(char('a'+i));
            if(pos ==string::npos ||(pos !=t-1 && pos != r+1)){
                yes=false;
                break;
            }
            else{
                t=min(t,pos);
                r=max(r,pos);
            }

        }
        cout<<(yes ? "YES" : "NO")<<endl;


    }
}