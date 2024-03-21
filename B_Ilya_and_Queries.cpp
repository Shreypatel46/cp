// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// signed main(){
//     int t;
//     //cin>>t;
//     t=1;
//     while(t--){
//         string s;
//         cin>>s;
//         int m;
//         cin>>m;
//         vector<int> v;
//         for(int i =1;i<=m;i++){
//             int first,second,c=0;
//             cin>>first>>second;
//             for(int i=first-1;i<second-1;i++){
//                 if(s[i]==s[i+1]){
//                     c++;
//                 }
//             }
//             //cout<<c<<endl;   
//             v.emplace_back(c);       
//         }
//         //cout<<"answers"<<endl;
//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<endl;
//         }
        
//     }
// }
#include <iostream>
#define int long long
int Q, A[100005], L, R, i;
std::string S;
main()
{
    std::cin >> S >> Q;
    for (i = S.length() - 2; i >= 0; i--)
        A[i] = A[i + 1] + (S[i] == S[i + 1]);
    while (Q--)
    {
        std::cin >> L >> R;
        std::cout << A[L - 1] - A[R - 1] << "\n";
    }   
}