#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,res;
    cin>>s;
    char s1='h';char s2='e';char s3='l';char s4='o';

    int p1=s.find(s1);
    if(p1!=string::npos){
        res+=s[p1];
        s=s.substr(p1+1);
    }
    int p2=s.find(s2);
    if(p2!=string::npos){
        res+=s[p2];
        s=s.substr(p2+1);
    }
    int p3=s.find(s3);
    if(p3!=string::npos){
        res+=s[p3];
        s=s.substr(p3+1);
    }
    int p4=s.find(s3);
    if(p4!=string::npos){
        res+=s[p4];
        s=s.substr(p4+1);
    }
    int p5=s.find(s4);
    if(p5!=string::npos){
        res+=s[p5];
        s=s.substr(p5+1);
    }
    if(res=="hello")
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}