#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char, int> exists;
    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        if (exists.find(s[i]) == exists.end()) {
        
            ans.push_back(s[i]);
            exists[s[i]]++;
        }
    }
    int x=ans.length();
    if(x%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}