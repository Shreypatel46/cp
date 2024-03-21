#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int count=0;
        if(k<=ceil(float(n)/2)){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(i==j){
                        if(i%2!=0 && count<k){
                            cout<<"R";
                            count++;
                            
                        }
                        else{
                            cout<<".";
                        }
                    }
                    else{
                        cout<<".";
                    }
                }
                cout<<"\n";
                
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
}