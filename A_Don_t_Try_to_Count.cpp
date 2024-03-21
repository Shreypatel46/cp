#include<bits/stdc++.h>
using namespace std;
// int isSubstring(string s1, string s2)
// {
//     if (s2.find(s1) != string::npos)
//         return 1;
//     return -1;
// }
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return 1;
    }
 
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,count=0;
        cin>>n>>m;
        string x,s;
        int res;
        if(n<m){
            res=isSubstring(x,s);
            if(res==1){
                cout<<-1<<endl;
            }
            else{
                while(1){
                    x.append(x);
                    count++;
                    n=sizeof(n);
                    if(n>m){
                        break;
                    }
                }
                res=isSubstring(s,x);
                if(res==1){
                    cout<<count<<endl;
                }
            }
        }
        else if(n==m){
            res=isSubstring(s,x);
            if(res==1){
                cout<<-1<<endl;
            }
            else{
                while(1){
                    x.append(x);
                    count++;
                    res=isSubstring(s,x);
                    if(res==1){
                        cout<<count<<endl;
                        break;
                    }
                
                }

            }
        }
        else{
            res=isSubstring(s,x);
            if(res==1){
                cout<<-1<<endl;
            }
            else{
                while(1){
                    x.append(x);
                    count++;
                    res=isSubstring(s,x);
                    if(res==1){
                        cout<<count<<endl;
                        break;
                    }
                
                }   

            }
        }
    }
}