#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     ll n;
     cin>>n;
     string s=to_string(n);
     cout<<s;
     reverse(s.begin(),s.end());
     cout<<s<<endl;  
}