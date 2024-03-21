#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,x;
    cin>>n>>t;
    string s;
    cin>>s;
    x=s.length();
    while(t)
    {
        for(int i=1;i<n;i++){
            if(s[i-1]=='B'&& s[i]=='G'){
                swap(s[i-1],s[i]);
                i++;
            }
        }
        t--;
    }
    cout<<s<<endl;
} 
    // if(s[x-2]=='B'){
    //     swap(tp[x-2],tp[x-1]);
    // }
    // for(int i=x-3;i>=0;i--){
    //     if(s[i]=='B' && s[i+t]!='B'){

    //         swap(tp[i],tp[i+t]);
    //     }
    //     else if(s[i]=='B'){
    //         swap(tp[i],tp[i+t-1]);
    //     }
        // else{
        //     int k=t-1;
        //     while(k){
        //         if(s[i]=='B'){
        //             if(s[i+k]=='B'){
        //                 k--;
        //             }
        //             else{
        //                 swap(s[i],s[i+k]);
        //             }
        //         }
        //         else{
        //             k--;
        //         }
        //     }
        // }

    

