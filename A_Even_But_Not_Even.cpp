#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n; cin>>n;
        string s; cin>>s;
        int odd=0;
        for(int i=0;i<n;i++){
            if((s[i]-'0')%2!=0){
                odd++;
                
            }
        }
        if(odd<=1)
            cout<<-1<<endl;
        else{
            int temp=0;
            for(int i=0;i<n;i++){
                if((s[i]-'0')%2!=0){
                    cout<<s[i];
                    temp++;
                
                }
                if(temp==2)
                    break;
            }
            cout<<endl;
        }
    }

}





































// int check(int n,int x,string s){
//             ll sum=0;
//             if(x%2!=0){
//                 for(int i=0;i<n;i++){
//                     sum+=(s[i]-'0');
//                 }
//                 if(sum%2==0){
//                     cout<<x<<endl;
//                     return 0;
//                 }  
//                 else{
//                     int j=0;
//                     while(1){
//                         if((s[j]-'0')%2!=0){
//                             s.erase(s.begin()+j);
//                             break;
//                         }
//                         j++;
//                     }
//                     x=stoi(s);
//                     n=sizeof(s);
//                     check(n,x,s);
//                 }
//             }
//             else{
//                 cout<<-1<<endl;
//                 return 0;
//             }
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         ll n,f=0;
//         string s;
//         cin>>n;
//         cin>>s;
//         ll x= stoi(s);
//         if(x<=10)
//             cout<<-1<<endl;
//         else{
//             while(x%2==0){
//                 if(n>1){
//                     s.erase(s.end()-1);
//                     x= stoi(s);
//                     n=sizeof(s);
//                 }
//                 else{
//                     f=1;
//                     break;
//                 }
                
//             }
//             if(f){
//                 cout<<-1<<endl;
//             }
//             else{
//                 check(n,x,s);
//             }
            
//         }
//     }
// }