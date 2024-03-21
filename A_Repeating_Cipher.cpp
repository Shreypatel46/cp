#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string res="";
    int i=0,j=1;
    while(i<=s.length()){
        res=res+s[i];
        i+=j;
        j++;
    }
    //cout<<res<<endl;
    int k=0;
    while(res[k]!='\0'){
        cout<<res[k];
        k++;
    }
    

}