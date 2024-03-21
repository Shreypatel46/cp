#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length()-1;i++){
        for(int j=0;j<s.length()-i-1;j++){
            if(s[j]!='+'){
                if(s[j]>s[j+2]){
                    char temp=s[j];
                    s[j]=s[j+2];
                    s[j+2]=temp;
                }
            }
        }
    }
    cout<<s<<endl;
}