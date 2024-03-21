#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n,f=0;
    cin>>s>>n;
    vector<pair<int,int>> v(n);
    while(n--){
        int first,second;
        cin>>first>>second;
        v.push_back(make_pair(first,second));
    }
    sort(v.begin(),v.end());
    for (const auto& p : v){
        if(s<=p.first){
            cout<<"NO"<<endl;
            f++;
            break;
        }
        else{
            s+=p.second;
        }
    }
    if(f==0)
        cout<<"YES"<<endl;
}


//bool compareSecond(const pair<int, int>& a, const pair<int, int>& b) {
//  return a.second < b.second;
//} sort(myVector.begin(), myVector.end(), compareSecond);
