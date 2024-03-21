#include<bits/stdc++.h>
using namespace std;
#define ll long long
int convert(string s)
{
	
	stringstream geek(s);
	int x = 0;
	geek >> x;
	return x;
}

int answer(string s,int a,int b,map<int,int>ha){
    int val=INT_MAX;
    if(ha.count(a)==0 || ha.count(b)==0)
        return val;
    ll pob=-1;
    ll n=s.length();
    for(ll i=n-1;i>=0;i--){
        ll x=s[i]-'0';
        if(x==b){
            pob=i;
            break;
        }
    }
    ll poa=-1;
    for(ll i=n-1;i>=0;i--){
        ll x=s[i]-'0';
        if(x==a && i<pob){
            poa=i;
            break;
        }
    }
    if(poa==-1){
        return val;
    }
    ll cnt =pob-poa-1;
    cnt+=n-pob-1;
    return cnt;
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        map<int,int> ha;
        string s;
        cin>>s;
        int n=convert(s);
        if(n%25==0){
            cout<<0<<endl;
        }
        else{
            for(int i=0;i<s.length();i++){
                ha[s[i]-'0']++;
            }
            int cnt1=answer(s,5,0,ha);
            int cnt2=answer(s,2,5,ha);
            int x=min(cnt1,cnt2);
            int cnt3=answer(s,7,5,ha);
            int cnt4=answer(s,0,0,ha);
            int y=min(cnt3,cnt4);
            int ans=min(x,y);
            cout<<ans<<endl;
        }
    }
}