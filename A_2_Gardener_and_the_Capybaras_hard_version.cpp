#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,sum;
        cin>>s;
        int x=s.length();
        if (s[0] == s[1]) {
        cout << s[0] << " " << s[1] << " " << s.substr(2) << '\n';
        }
        else if (s[x - 2] == s[x - 1]) {
        cout << s.substr(0, x - 2) << " " << s[x - 2] << " " << s[x - 1] << '\n';
        }
        else if (s[0] < s[1]) {
        for (int i = 1; i < x - 1; i++) {
            if (s[i] > s[i + 1]) {
                cout << s.substr(0, i) << " " << s[i] << " " << s.substr(i + 1) << '\n';
                break;
            }
        }
        }
        else {
        for (int i = 1; i < x - 1; i++) {
            if (s[i] <= s[i + 1]) {
                cout << s.substr(0, i) << " " << s[i] << " " << s.substr(i + 1) << '\n';
                break;
            }
        }
        }
 
    }
}
//if(s[x/2]=='a'){
//         for(int i=0;i<x;i++){
//             if(i<x/2){
//                 sum+=s[i];
//             }
//             else if(i==x/2){
//                 cout<<sum<<" "<<s[i]<<" ";
//                 sum.clear();
//             }
//             else{
//                 sum+=s[i];
//             }
//         }
//         cout<<sum<<endl;
//         }
//         else if(s[x/2 -1]=='a' && (x/2-1 !=0)){
//             for(int i=0;i<x;i++){
//             if(i<x/2-1){
//                 sum+=s[i];
//             }
//             else if(i==x/2-1){
//                 cout<<sum<<" "<<s[i]<<" ";
//                 sum.clear();
//             }
//             else{
//                 sum+=s[i];
//             }
//         }
//         cout<<sum<<endl;
           
//         }
//         else{
//             int te=x/2,fa=0,fc=0;
//             string sb,sa,sc;
//             while(te<x-1){
//                 if(s[te]=='b')
//                     sb+=s[te];
//                 else{
//                     for(int i=te;i<x;i++){
//                         sc+=s[i];
//                     }
//                     fc=1;
//                     break;
//                 }
//                 te++;
//             }
//             if(fc==0)
//                 sc=s[x-1];
//             te=x/2-1;
//             while(te>=1){
//                 if(s[te]=='b')
//                     sb=s[te]+sb;
//                 else{
//                     for(int i=0;i<=te;i++){
//                         sa+=s[i];
//                     }
//                     fa=1;
//                     break;
//                 }
//                 te--;
//             }
//             if(fa==0)
//                 sa=s[0];
            
//             cout<<sa<<" "<<sb<<" "<<sc<<endl;
//         }
