#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    while(n--){
        if(a[j] == "++X"){
            ++x;
        }
        else if(a[j] == "X++"){
            x++;
        }
        else if(a[j] == "--X"){
            --x;
        }
        else if(a[j] == "X--"){
            x--;
        }
        j++;
    }
    cout<<x<<endl;
}