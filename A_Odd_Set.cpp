#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        vector<int> ve,vo;
        for(int i=0;i<2*n;i++){
            int temp;
            cin>>temp;
            if(temp%2==0){
                ve.push_back(temp);
            }
            else{
                vo.push_back(temp);
            }
            
        }
        if(ve.size()==vo.size()){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
        t--;
    }
}