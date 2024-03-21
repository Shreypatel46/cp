#include<bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int a,  int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 
  
// Function to return LCM of two numbers  
int lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b; 
} 
  
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b%a!=0){
            cout<<lcm(a,b)<<endl;        
        }
        else{
            cout<<b*b/a<<endl;
        } 
    }
}