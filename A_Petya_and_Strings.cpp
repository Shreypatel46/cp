#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int comp;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    comp=s1.compare(s2);
    if(comp==0){
        cout<<0;
    }
    else if(comp<0){
        cout<<-1;
    }
    else{
        cout<<1;
    }
} 