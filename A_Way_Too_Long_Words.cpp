#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int x=s.length();
        string t="";
        if(x<=10){
            cout<<s<<endl;
        }
        else{
            cout<<(s[0]+to_string(x-2)+s[x-1])<<endl;
        }
    }
}