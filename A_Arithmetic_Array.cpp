#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        int n,sum=0;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
            sum+=temp;
        }
        if(sum==n){
            cout<<0<<endl;
        }
        else{
            if(sum>n){
                cout<<sum-n<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }

        t--;
    }
}