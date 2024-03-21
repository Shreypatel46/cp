#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int q=n;
    double res;
    cout<<setprecision(14);
    while(n--){
        int temp;
        cin>>temp;
        sum+=temp;
    }
    cout<<(1.0*sum)/q<<endl;
}