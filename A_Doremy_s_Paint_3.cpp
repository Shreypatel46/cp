    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            mp[temp]++;
        }
        if(n==2||n==1){
            cout<<"Yes"<<endl;
            continue;
        }
        if(mp.size()>2){
            cout<<"No"<<endl;
            continue;
        }
        if(n>2 &&mp.size()==1){
            cout<<"Yes"<<endl;
            continue;
        }
        int diff=0;
        for(auto i:mp){
                diff=abs(diff-i.second);
        }
        if(diff==1|| diff==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }


    }

}